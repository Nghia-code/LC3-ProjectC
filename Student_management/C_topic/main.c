#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

typedef struct Node
{
	char name[30];
	char gender[30];
	int ID;
	int age;
	int math;
	int physic;
	int chemistry;
	struct Node* next;
	
}Node_t;

Node_t *top;

typedef struct Manage_Student 
{
	char name[30];
	char gender[30];
	int ID;
	int age;
	int math;
	int physic;
	int chemistry;
}Manage_Student_t;


// Define: push function express when pushing an element to stack

void push(Manage_Student_t element)
{
	Node_t* ptr = (Node_t*)malloc(sizeof(Node_t));
	strcpy(ptr->name,element.name);
	strcpy(ptr->gender,element.gender);
	ptr->ID = element.ID;
	ptr->age = element.age;
	ptr->math = element.math;
	ptr->physic = element.physic;
	ptr->chemistry = element.chemistry;
	if(top == NULL)
	{
		ptr->next = NULL;
	}
	else
	{
		ptr->next = top;
	}
	top = ptr;
	return;
}

// Define: pop function express when poping an element out of stack
Manage_Student_t pop()
{
		Manage_Student_t element;
		Node_t *temp;
		temp = top;
		top = top->next;
		strcpy(element.name,temp->name);
		strcpy(element.gender,temp->gender);
		element.ID = temp->ID;
		element.age = temp->age;
		element.math = temp->math;
		element.physic = temp->physic;
		element.chemistry = temp->chemistry;
		free(temp);
		return element;
}

void check_name(char student[])
{
	int first = 1;
	int num = 0;
	int check_capital = 0;
	int blank_count = 0;
	int i,j = 0;
	char arr[30];
	for(i = 0;i < strlen(student);i++)
	{
		if(student[i] == ' ')
		{
			blank_count++;
			first = 1;
			continue;
		}
		if(student[i] <= 122 && student[i] >= 97 && first == 1 && student[i] != ' ')
		{
			check_capital = 1;
		}
		
		if(first == 1 && student[i] != ' ' )
		{
			if(blank_count >= 1 )
			{
				if(num > 0)
				{
					arr[j] = ' ';
					j++;	
				}
			}
			if(check_capital == 1)
			{
				student[i] -= 32;
			}
			arr[j] = student[i];
			j++;
			blank_count = 0;
			check_capital = 0;
			first = 0;	
			num++;	
		}
		else if(blank_count == 0 && first == 0 && check_capital == 0 && student[i] != ' ')
		{
			arr[j] = student[i];
			j++;
			num++;
		}
	}
	strcpy(student,arr);
}


int main()
{
	int key;
	int mode;
	char temp;
	int i = 0;
	char c;
// press 1 to continue evaluate with student ; press 0 to end the evaluation
	while(1)
	{
		Manage_Student_t input,output;
		printf("press 1 to continue evaluate with student, press 0 to end the evaluation: ");
		scanf("%d",&key);
		if(key== 0)
		{
			printf("Ending........");
			break;
		}
		printf("Press 1 to push a student, press 0 to pop a student: ");
		scanf("%d",&mode);
		printf("\n");
		if(mode == 1)
		{
			printf("Student's name: ");
			while(getchar() != '\n');
			fgets(input.name,sizeof(input.name),stdin);
			check_name(input.name);
			printf("Student's gender: ");
			fgets(input.gender,sizeof(input.gender),stdin);
			printf("Student's ID: ");
			scanf("%d",&input.ID);
			printf("Student's age: ");
			scanf("%d",&input.age);
			printf("\nInput student scores");
			printf("\nMath score: ");
			scanf("%d",&input.math);
			printf("Physic score: ");
			scanf("%d",&input.physic);
			printf("Chemistry score: ");
			scanf("%d",&input.chemistry);
			push(input);
		}
		else if(mode == 0)
		{
			if(top == NULL)
			{
				printf("stack is empty !!\n");
			}
			else
			{
				output = pop();
				printf("Student's name: ");
				printf("%s",output.name);
				fflush(stdin);
				printf("Gender: %s", output.gender );
				printf("Student's ID: %d\n",output.ID);
				printf("Student's age: %d\n",output.age);
				printf("\nResult of student scores\n");
				printf("Math score: %d\n",output.math);
				printf("Physic score: %d\n",output.physic);
				printf("Chemistry score: %d \n",output.chemistry);
			}
		}
	}
	return 0;
}
