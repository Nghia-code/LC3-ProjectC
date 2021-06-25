
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <stdbool.h>
#include <ctype.h>

typedef struct Node
{
    char name[30];
    char gender[10];
    int ID;
    int age;
    float math;
    float physic;
    float biology;
    struct node *next;
}Node_t;

Node_t *top;

typedef struct Manage_Student
{
    char name[30];
    char gender[10];
    int ID;
    int age;
    float math;
    float physic;
    float biology;
}Manage_Student_t;


void push(Manage_Student_t value)
{
    Node_t *ptr = (Node_t*)malloc(sizeof(Node_t));
    strcpy(ptr->name, value.name);
    strcpy(ptr->gender, value.gender);
    ptr->age = value.age;
    ptr->ID = value.ID;
    ptr->biology = value.biology;
    ptr->math = value.math;
    ptr->physic = value.physic;
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

Manage_Student_t pop()
{
    Manage_Student_t value;
    Node_t *temp;
    temp = top;
    top = top->next;
    strcpy(value.name, temp->name);
    strcpy(value.gender, temp->gender);
    value.age = temp->age;
    value.ID = temp->ID;
    value.biology = temp->biology;
    value.math = temp->math;
    value.physic = temp->physic;
    free(temp);
    return value;
}


//xem thong tin phan tu dau stack - khong xoa
Manage_Student_t peek()
{
    Manage_Student_t value;
    Node_t *temp;
    temp = top;
    strcpy(value.name, temp->name);
    strcpy(value.gender, temp->gender);
    value.age = temp->age;
    value.ID = temp->ID;
    value.biology = temp->biology;
    value.math = temp->math;
    value.physic = temp->physic;
    return value;
}

//=========================Check_Name==============================
char* Del(char *s,int pos,int num)
{
    int n = strlen(s), i=pos+num;
    if (i>=n)
    {
        s[pos]='\0';
        return s;
    }
    while (i<n)
    {
        s[i-num]=s[i];
        i++;
    }
    s[i-num]='\0';
    return s;
}

char* check_name(char *s)
{
    int n=strlen(s),i=n-1;
    while (s[i]==' ')
    {
    i--;  //Xoa ki tu trong o cuoi
    }
    s[i+1]='\0';

    i=0;
    while(s[i]==' ')i++;   //Xoa ki tu trong o dau
    Del(s,0,i);

    n=strlen(s);
    for(i=0; i<n;++i)      //Chuyen het thanh chu thuong
        if((s[i]>=65)&&(s[i]<=90))
        {
            s[i]+=32;
        }

    i=0;
    n=strlen(s);
    while(i<n)             //Xoa ki tu trong thua
    {
        if((s[i]==' ')&&(s[i+1]==' '))
        Del(s,i,1);
        else
        {
            ++i;
        }
    }

    n=strlen(s);           //Viet hoa dau chu
    for(i=0; i<n; i++)
        if(s[i]==' ') s[i+1]-=32;
    s[0]=toupper(s[0]);

   i=0;
   while (s[i]!='\0')
   {
       if((!isalpha(s[i]))&&(s[i]!=32))
           Del(s,i,1);
       else ++i;
   }
   return s;
}
//======================================================
void hienThi()
{
    printf("-----------------------------------------------------\n");
	printf("%-10s %-30s %-10s %-10s %-10s %-10s %-10s \n","ID" , "Name", "Age", "Gender", "Math", "Physic", "Biology");

}

void Menu()
{

    int option;
    while(1)
    {
        system("cls");
        Manage_Student_t input,output;
        printf("\n\n\t ==================Menu================");
        printf("\n\t1.Push a student information");
        printf("\n\t2.Pop a student information");
        printf("\n\t3.Peek a student information");
        printf("\n\t0.Stop");
        printf("\n\n\t ==================End=================");

        printf("\n\n\tInput yours option: ");
        scanf("%d", &option);

        if(option < 0 || option >=5)
        {
            printf("Please input option from 0 to 5");
            break;
        }
        else if(option == 0)
        {
            printf("\nEnding...........\n");
            break;
        }
        else if(option == 1)
        {
            printf("\nStudent's name: ");
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
			scanf("%f",&input.math);
			printf("Physic score: ");
			scanf("%f",&input.physic);
			printf("Chemistry score: ");
			scanf("%f",&input.biology);
			push(input);
            system("pause");
        }
        else if (option == 2)
        {
            if(top == NULL)
            {
                printf("Stack is empty !!\n");
                system("pause");
            }
            else
            {
                output = pop();
                hienThi();

                // printf("Student's name: ");
				// printf("%s",output.name);
				// fflush(stdin);
				// printf("\nGender: %s", output.gender );
				// printf("Student's ID: %d\n",output.ID);
				// printf("Student's age: %d\n",output.age);
				// printf("\nResult of student scores\n");
				// printf("Math score: %.2f\n",output.math);
				// printf("Physic score: %.2f\n",output.physic);
				// printf("Chemistry score: %.2f \n",output.biology);
                   printf("-10d %-30s %-10d %-10s  %-3.2f %.2f %.2f", output.ID, output.name, output.age ,output.gender, output.math, output.biology, output.physic);
                   system("pause");
            }
        }
        else if(option == 3)
        {
            output = peek();
            printf("Student's name: ");
				printf("%s",output.name);
				fflush(stdin);
				printf("\nGender: %s", output.gender );
				printf("Student's ID: %d\n",output.ID);
				printf("Student's age: %d\n",output.age);
				printf("\nResult of student scores\n");
				printf("Math score: %.2f\n",output.math);
				printf("Physic score: %.2f\n",output.physic);
				printf("Chemistry score: %.2f \n",output.biology);
                system("pause");
        }
    }
}
int main()
{
    int option;
    int i = 0;
    Menu();
    system("pause");
    return 0;
}
