#include <stdio.h>
#include <string.h>
#include <ctype.h>
/*
*/
char* ChuanHoa(char *s);
char* Del(char *s,int pos,int num);
 
int main()
{
   char s[100];
   printf(" - Nhap vao chuoi: ");
   gets(s);
   printf("Chuoi sau chuan hoa: >>%s<<",ChuanHoa(s));
}
 
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
 
char* ChuanHoa(char *s)
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
            s[i]+=32;
 
    i=0;n=strlen(s);
    while(i<n)             //Xoa ki tu trong thua
    {
        if((s[i]==' ')&&(s[i+1]==' '))
        Del(s,i,1);
        else ++i;
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