#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <stdbool.h>
#include <ctype.h>

typedef struct Node
{
    char name[30];
    int ID;
    int age;
    float calculus;
    float physic;
    float biology;
    float average_scores;
    struct node *next;
}Node_t;

Node_t *top;

typedef struct Manage_Student
{
    char name[30];
    int ID;
    int age;
    float calculus;
    float physic;
    float biology;
    float average_scores;
}Manage_Student_t;

void push(Manage_Student_t value);
Manage_Student_t pop();
Manage_Student_t peek();
char* Del(char *s,int pos,int num);
char* check_name(char *s);
void show();
void Menu();

int main()
{
    Menu();
    system("pause");
    return 0;
}

void push(Manage_Student_t value)
{
    Node_t *ptr = (Node_t*)malloc(sizeof(Node_t));
    strcpy(ptr->name, value.name);
    ptr->age = value.age;
    ptr->ID = value.ID;
    ptr->biology = value.biology;
    ptr->calculus = value.calculus;
    ptr->physic = value.physic;
    ptr->average_scores = value.average_scores;
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
    value.age = temp->age;
    value.ID = temp->ID;
    value.biology = temp->biology;
    value.calculus = temp->calculus;
    value.physic = temp->physic;
    value.average_scores = temp->average_scores;
    free(temp);
    return value;
}

Manage_Student_t peek()
{
    Manage_Student_t value;
    Node_t *temp;
    temp = top;
    strcpy(value.name, temp->name);
    value.age = temp->age;
    value.ID = temp->ID;
    value.biology = temp->biology;
    value.calculus = temp->calculus;
    value.physic = temp->physic;
    value.average_scores = temp->average_scores;
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
    //delete blank space at the end
    int n=strlen(s);
    int i=n-1;
    while (s[i]==' ') 
    {
        i--; 
    }
    s[i+1]='\0';
    // delete first character
    i=0;
    while(s[i]==' ')i++;  
    Del(s,0,i);

    //convert to lowercase
    n=strlen(s);
    for(i=0; i<n;++i) 
        if((s[i]>=65)&&(s[i]<=90))
        {
            s[i]+=32;
        }
    // delete space between word
    i=0;
    n=strlen(s);
    while(i<n)             
    {
        if((s[i]==' ')&&(s[i+1]==' '))
        Del(s,i,1);
        else
        {
            ++i;
        }
    }
    //Uppercase first character
    n=strlen(s);           
    for(i=0; i<n; i++)
        if(s[i]==' ') s[i+1]-=32;
    s[0]=toupper(s[0]);
 
    i=0;
    while (s[i]!='\0')
    {
        if((!isalpha(s[i]))&&(s[i]!=32))
        {
            Del(s,i,1);
        }
        else
        {
            ++i;
        }
    }
    return s;
}
//======================================================
void show()
{
    printf("----------------------------------------------------------------------------------------\n");
	printf("%-10s %-25s %-10s %-10s %-10s %-10s %-10s\n", "ID", "Name", "Age", "Calculus ", "Physic", "Biology", "Avarage");  
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
        if(option < 0 || option >4)
        {
            printf("Please input option from 0 to 3\n");
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
			printf("Student's ID: ");
			scanf("%d",&input.ID);
			printf("Student's age: ");
			scanf("%d",&input.age);
			printf("\nInput student scores");
			printf("\nCalculus score: ");
			scanf("%f",&input.calculus);
			printf("Physic score: ");
			scanf("%f",&input.physic);
			printf("Biology score: ");
			scanf("%f",&input.biology);
            input.average_scores = (input.calculus  + input.biology + input.physic)/3;
            printf("Avarage scores: %.2f\n", input.average_scores);
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
                show();
                printf("%-10d %-25s %-10d %-10.2f %-10.2f %-10.2f %-10.2f \n", output.ID, output.name,  output.age, output.calculus, output.biology, output.physic, output.average_scores);
                system("pause");
            }
        }
        else if(option == 3)
        {
            if(top == NULL)
            {
                printf("Stack is empty !!\n");
                system("pause");
            }
            else
            {
                output = peek();
                show();
                printf("%-10d %-25s %-10d %-10.2f %-10.2f %-10.2f %-10.2f\n", output.ID, output.name,  output.age, output.calculus, output.biology, output.physic, output.average_scores);
                system("pause");
            }
        }
    }
}