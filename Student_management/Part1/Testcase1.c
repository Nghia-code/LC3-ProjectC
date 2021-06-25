#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>
 
void chuanhoachuoi(char[]);//khai bao nguyen mau ham
void strdelete(char *s,int vt,int sl);
int main()
{
   char a[100];
   
   printf("Nhap vao chuoi:");
   gets(a);
   chuanhoachuoi(a);
   printf("Chuoi sau chuan hoa:%s",a);
   getch();
}
 
void strdelete(char *s,int vt,int sl)
{  
    int n=strlen(s);
    int i;
    for (i=vt;i<=n-sl;++i)
        s[i]=s[i+sl];
}
void chuanhoachuoi(char a[])
{
    int i,j;
    j = strlen(a);
    while(a[j-1]==' ')// xoa het cac ki tu trong o cuoi chuoi
        a[j-1]=0;
    while(a[0]==' ')          //xoa het cac ki tu trong o dau chuoi
        strdelete(a,0,1);
    for(i=0;i<j;++i)
        if((a[i]>=65)&&(a[i]<=90))  //kiem tra co phai la ky tu hoa
            a[i]+=32;        //chuyen tat ca ve ky tu thuong
    i=0;
    while(i<j)                //xoa hai ki tu trong lien tiep
     if((a[i]==' ')&&(a[i+1]==' '))
         strdelete(a,i,1);
     else ++i;
 
   for(i=0;i<j;i++)
    if(a[i]==' ')
        a[i+1]-=32;  //chuyen chu cai sau khoang trang thanh chu hoa
   
   a[0]=toupper(a[0]);//chuyen chu cai dau tien thanh chu hoa
     
    i=0;
    while(i<strlen(a))    //xoa cac ki tu khong phai la chu cai
    if((a[i]!=' ')&&(!isalpha(a[i])))
        strdelete(a,i,1);
     else ++i;
}