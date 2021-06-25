#include <stdio.h>
#include <conio.h>


int tang(int *a)
{	
	*a=*a+2;
	printf("dia chi %d a trong ham tang %d \n",a,*a);
	return *a;
}

int main()
{
	int a=5;
	tang(&a);
	printf("a %d trong ham %d",&a,a);
	
	getch();
}
