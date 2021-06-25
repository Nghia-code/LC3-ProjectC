#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct node
{
	char ten[30];
	int ID;
	int age;
	int math;
	int physic;
	int chemistry;
	struct node *next;	
}node_t;

node_t *front = NULL;
node_t *rear = NULL;

typedef struct Student
{
	char ten[30];
	int ID;
	int age;
	int math;
	int physic;
	int chemistry;	
} Manage_Student;


/* Define: Enqueue() function describe when pushing an element to queue
*/
void Enqueue(Manage_Student element)
{
		node_t* ptr = malloc(sizeof(node_t));
		strcpy(ptr->ten,element.ten);
		ptr->ID = element.ID;
		ptr->age = element.age;
		ptr->math = element.math;
		ptr->physic = element.physic;
		ptr->chemistry = element.chemistry;
		ptr->next = NULL;
		if(rear == NULL)
		{
			front = ptr;
			rear = ptr;
		}
		else
		{
			rear->next = ptr;
			rear = rear->next;
		}
	return;
}
/* Define: Dequeue() function describe when deleting an element out of queue
*/
void Dequeue()
{	
		if(front == NULL)
		{
			printf("queue is empty \n ");
		}
		else
		{
			front = front->next;
		}
}

/*  Define: Front() function describe when taking an element out of stack
*/
Manage_Student Front(Manage_Student element)
{
	if(front == rear && front == NULL)
	{
		printf("queue is empty !!! \n");
		exit(1);
	}
	else if(front == rear->next)
	{
		printf("queue is empty !!! \n");
		exit(1);
	}
	else
	{
		node_t *temp;
		temp = front;
		strcpy(element.ten,temp->ten);
		element.ID = temp->ID;
		element.age = temp->age;
		element.math = temp->math;
		element.physic = temp->physic;
		element.chemistry = temp->chemistry;
		return element;
	}
}

/* Define: Size() function describe when checking the size of queue
*/
int Size()
{
	return rear - front + 1;	
}

void Is_Empty()
{
	if(front == rear && front == NULL)
	{
		printf("Queue is empty !!! \n");
	}
	else
	{
		printf("Queue is not empty !!! \n");
	}
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
	int i = 0;
	char c;
//  press 1 to continue evaluate with student ; press 0 to end the evaluation
	while(1)
	{
		Manage_Student input,output;
		printf("press 1 to continue evaluate with student, press 0 to end the evaluation: ");
		scanf("%d",&key);
		if(key== 0)
		{
			printf("Ending........");
			break;
		}
		printf("Press 0 to enqueue a student\nPress 1 to insert student information\nPress 2 to delete student information\nPress 3 to check the size of queue\nPress 4 to check if queue empty of not\n");
		scanf("%d",&mode);
		if(mode == 0)
		{
			printf("Student's name: ");
			while(getchar() != '\n');
			fgets(input.ten,30,stdin);
			check_name(input.ten);
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
			Enqueue(input);
		}
		else if(mode == 1)
		{
			output = Front(input);
			printf("Student's name: ");
			puts(output.ten);
			printf("Student's ID: %d\n",output.ID);
			printf("Student's age: %d\n",output.age);
			printf("\nResult of student scores\n");
			printf("Math score: %d\n",output.math);
			printf("Physic score: %d\n",output.physic);
			printf("Chemistry score: %d \n",output.chemistry);
		}
		else if(mode == 2)
		{
			Dequeue();
		}
		else if(mode == 3)
		{
			printf("Size of queue: %d\n",Size());
		}
		else if(mode == 4)
		{
			Is_Empty();
		}
	}
	return 0;
}
