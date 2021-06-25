/*
 * C Program to Implement Stack Operations using Dynamic Memory 
 * Allocation
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 
struct node
{
    char ten[50];
    char ID[8];
    int tuoi;   
    float  toan;
    float  ly;
    float  tin;
    float  van;
    float  anh;
    struct node *link;
}*top = NULL;
 
#define MAX 100
 
// function prototypes
void push();
void pop();
void empty();
void stack_full();
void stack_count();
void destroy();
void print_top();

void suaten();
void kiemtradiem();
void kiemtraso();
void xoatrang();
void xuat_pop();
int st_count();

int main()
{
    int choice;
   
    while (1)
    {
        printf("1. push an element \n");
        printf("2. pop an element \n");
        printf("3. check if stack is empty \n");
        printf("4. count/display elements present in stack \n");
        printf("5. empty and destroy stack \n");
        printf("6. Print top of the stack \n");
        printf("7. exit \n");
        
        printf("Enter your choice: ");
        kiemtraso(&choice,1,7,"lua chon");
        
        switch (choice)
        {
        case 1:    
            push();
            break;         
        case 2:    
            pop();
            break;         
        case 3:    
            empty();
            break;               
        case 4:    
            stack_count();
            break;         
        case 5:    
            destroy();
            break;         
        case 6:    
            print_top();
            break;
        case 7:    
            exit(0);
        default:
            printf("Wrong choice\n");         
        }
    }
}
 
// to insert elements in stack
void push()
{
	printf("--------------------------------------------\n");
	printf("Lua chon PUSH: \n");
    int  count,n,i;
    char xoaenter[2];
    struct node *temp;
    
    printf("Nhap so luong sinh vien PUSH vao:");
    kiemtraso(&n,0,99,"so PUSH vao");
  	
	for (i=1;i<=n;i++)
	{
	temp = (struct node*)malloc(sizeof(struct node));
    {
    	printf("--------------------------------------------\n");
        printf("Nhap ten sinh vien %d: ",i);
        fgets(xoaenter,2,stdin);
        fgets(temp->ten,50,stdin);
      	suaten(&temp->ten);
      	printf("Hieu chinh ten      : %s",temp->ten);
      	
        printf("Nhap ID             : ");
        scanf("%s",&temp->ID);
        
        printf("Nhap tuoi (18-40)    : ");
        kiemtraso(&temp->tuoi,18,40,"tuoi");
	
        printf("Nhap diem Toan(0-10) : ");
        kiemtradiem(&temp->toan,"Toan");
        
        printf("Nhap diem Ly  (0-10) : ");
        kiemtradiem(&temp->ly,"Ly");
        
        printf("Nhap diem Tin (0-10) : ");
        kiemtradiem(&temp->tin,"Tin");
               
        printf("Nhap diem Van (0-10) : ");
        kiemtradiem(&temp->van,"Van");
        
        printf("Nhap diem Anh (0-10) : ");
        kiemtradiem(&temp->anh,"Anh");
        
        printf("--------------------------------------------\n");
        
		temp->link = top;
        top = temp;
    }
}
}

void kiemtradiem(float *diem,char mon[])
{
	char diemthu[10];
	scanf("%s",diemthu);
	while (((strtod(diemthu,NULL)==0)&&((diemthu[0]!='0')||(diemthu[1]!=0)))||(strtod(diemthu,NULL)<0)||(strtod(diemthu,NULL)>10))
	{
		printf("Nhap lai diem mon %s la SO (0-10):",mon);
		scanf("%s",diemthu);
	}
	*diem=strtod(diemthu,NULL);
}
void kiemtraso(int *so,int min,int max,char chuoi[])
{
	char sokiemtra[10];
	scanf("%s",sokiemtra);
	while (((strtod(sokiemtra,NULL)==0)&&((sokiemtra[0]!='0')||(sokiemtra[1]!=0)))|((strtod(sokiemtra,NULL)-(int)atoll(sokiemtra))!=0)||(atoll(sokiemtra)< min)||((atoll(sokiemtra)>max)))
		{
			printf("Nhap lai %s la SO (%d-%d):",chuoi,min,max);
			scanf("%s",sokiemtra);
		}
		*so = atoll(sokiemtra);
}
// to delete elements from stack
void pop()
{
	printf("--------------------------------------------\n");
	printf("Lua chon POP: \n");
	
	int n;
	struct node *temp;
	printf("Nhap so luong sinh vien POP ra:");
    kiemtraso(&n,0,99,"so PUSH vao");
    while (n>0)
    {
	    if (top == NULL)
	    {
	    	printf("--------------------------------------------\n");
	        printf("**Stack is empty**\n");
	        printf("--------------------------------------------\n");
		}
		else
	    {
	    	temp = top;
	        xuat_pop();
	        top = top->link;
    		free(temp);
		}
		n--;
	}
}
void xuat_pop()
{
	struct node *temp;
	temp = top;
	printf("-----------------------------------------\n");
    printf("Ten : %s",temp->ten);
    printf("ID  : %s\n",temp->ID);
  	printf("Tuoi: %d \n",temp->tuoi);
 
 	printf("Diem: Toan |  Ly   |  Tin   |  Van  |  Anh  |\n");
 	printf("    %6.2f |%6.2f |%6.2f  |%6.2f |%6.2f |\n",temp->toan,temp->ly,temp->tin,temp->van,temp->anh);
	   printf("--------------------------------------------\n\n");
}
void empty()
{
	printf("--------------------------------------------\n");
	printf("Lua chon CHECK EMPTY: \n");
	
    if (top == NULL)
    {
		printf("STACK IS EMPTY\n");
    	printf("--------------------------------------------\n\n");
	}	
	else
	{
        printf("Elements are present, stack is not empty \n");
        printf("--------------------------------------------\n\n");
	}
}

void stack_count()
{
	printf("--------------------------------------------\n");
	printf("Lua chon COUNT STACK: \n");
    int count = 0;
    struct node *temp;
 
    temp = top;
    while (temp != NULL)
    {
        printf(" %d\n",temp->ten);
        temp = temp->link;
        count++;
    }
    printf("Size of stack is %d \n",count);
    printf("--------------------------------------------\n\n");
}
 
int st_count()
{
    int count = 0;
    struct node *temp;
    temp = top;
    while (temp != NULL)
    {
        temp = temp->link;
        count++;
    }
    return count;
}
 
void destroy()
{
	printf("--------------------------------------------\n");
	printf("Lua chon DETROY: \n");
    struct node *temp;
    temp = top;
    while (temp != NULL)
    {
        xuat_pop();
        top = top->link;
    	free(temp);
        temp = temp->link;
    }
    printf("\nXOA XONG\n");
    printf("--------------------------------------------\n\n");
}
 
void print_top()
{
    if (top == NULL)
    {
    	printf("--------------------------------------------\n");
        printf("\n**Top is not available for an EMPTY stack**\n");
        printf("--------------------------------------------\n\n");
    }
    else
    {
    	printf("--------------------------------------------\n\n");
		printf("\nTop of the stack is:\n"); 
		xuat_pop();
	}	
}
void suaten(char ten2[])
{
	int i,j;
	char ten[50] ;
	strcpy(ten,ten2);
	while (ten[0]==' ')		
		xoatrang(ten,0);
	i=1;
	while(i < strlen (ten))
		if (ten[i] == ' ' && ten[i+1] == ' ') 
			xoatrang(ten,i);
		else i++;
	for ( i = 0; i < strlen (ten); i++)
	{
		if ((ten[i-1]==' ')||(i==0))
		{
			if ((ten[i] >= 'a') && (ten[i] <= 'z'))
				ten[i] -= 32;
		}
		else 
			if ((ten[i] >= 'A') && (ten[i] <= 'Z'))
				ten[i] += 32;
	}
	strcpy(ten2,ten);
}
void xoatrang(char *ten,int i)
{
	int j;
	for (j=i; j<strlen(ten);j++)
		ten[j] = ten[j+1];

}
