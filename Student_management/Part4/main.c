/* Program simulates Reverse Polish Notation (RPN) - topic 4 of the C project
   Author: BuiTRungNguyen
   Input: a lower letter string, Ex: a+b+c, a*b-c..
   Output: a string that has been standardized according to RPN, Ex: ab+c, abc*-..
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct node
{
	char data ;
	struct node* next;
}node_t;

node_t *top = NULL; // a pointer to the peek of stack
/* Function: Push()
   Definition: push an element to a stack
   Return value: nothing
*/
void Push(char a)
{
	node_t* ptr = malloc(sizeof(node_t)); // allocate a memory to create an element in stack
	ptr->data = a; // assign a character to stack data
	ptr->next = top;
	top = ptr;
	return;
}

/* Function: Pop()
   Definition: take an peek element out of a stack
   Return value: a character in stack
*/
char Pop()
{
	char a;
	node_t *temp;
	temp = top;
	top = top->next;
	a = temp->data;
	free(temp); // free the memory that has been allocated 
	return a;
}

/* Function: Peek()
   Definition: take an element on the peek of a stack
   Return value: a character in stack
*/
char Peek()
{
	if(top != NULL)
	{
		node_t *temp;
		temp = top;
		return temp->data;
	}
}

int main()
{
	char arr[100];
	int i;
	printf("Type a lower letter string: ");
	fgets(arr,sizeof(arr),stdin); // input the string 
	printf("Reverse Polish Notation string: ");
	for(i = 0; i < strlen(arr); i++)
	{
		if(arr[i] == '(' ) // if character is '(', push to stack
		{
			Push(arr[i]);
		}
		else if(arr[i] == ')') // if character is ')', we take one by one element in stack out until we got character '(', then stop taking element out
		{
			while(Peek() != '(')
			{
				printf("%c",Pop());
			}
			top = top->next;
		}
		else if(arr[i] >= 97 && arr[i] <= 122 ) // if character is letter, print it out
		{
				printf("%c",arr[i]);
		}
		else if(arr[i] == '*' || arr[i] == '/') // if character is '*' or '/',push it in stack ; PS: we prioritize '*' than '/'
		{
			if(Peek() == '*' && arr[i] == '/')
			{
				printf("%c",Pop());
			}
			Push(arr[i]);
		}
		else if(arr[i] == '+' || arr[i] == '-') // if character is '+' or '-', check in stack has already had '*' or '/' or not, if yes then take '*' or '/' out, then push current character in stack
		{
			if(Peek() == '*' || Peek() == '/')
			{
				printf("%c",Pop());
			}
			else if(Peek() == '+' || Peek() == '-')
			{
				printf("%c",Pop());
			}
			Push(arr[i]);
		}
	}
	while(top != NULL) // check if any element left in stack , if yes take them out of stack
	{
		printf("%c",Pop());
	}
	return 0;
}
