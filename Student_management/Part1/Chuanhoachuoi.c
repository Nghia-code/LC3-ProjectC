#include <stdio.h>
#include <string.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char s[100];
    int l,i,k,count=0;
    printf("Nhap xau s: ");
    scanf("%[^\n]",s); // gets(s)
    l = strlen(s);
    // bo dau cach
    i = 0;
    s[0]=toupper(s[0]);
    while (s[i] != '\0')
    {
        if(s[i] == ' ' && s[i+1] == ' ')
        {
            k = i;
            while ( s[k+1] != '\0')
            {
                s[k]= s[k+1];
                k++;
                s[k] = '\0';
            }
            i--;
        }
        i++;
    }
    if(s[0] == ' ')
    {
        l = strlen(s);
        for(i = 0; i<= l-1;i++)
        {
            s[i] = s[i+1];
        }
    }

    // xu li dau cach cuoi
    l = strlen(s);
    if(s[l-1] == ' ')
    {
        s[l-1] = s[l];
    }

    // chuan hoa ki tu dau 
    i=0;
    while (s[i] != '\0')
    {
        if(s[i] == ' ' && s[i+1] != ' ')
        {
            if(s[i+1] >= 'a' && s[i+1] <= 'z')
            {
                s[i+1] = s[i+1] - 32;
            }
        }
        i++;
    }
    
    //chuan hoa ki tu bat ki 
    i=0;
    while (s[i] != '\0')
    {
        if(s[i] != ' ' && s[i+1] >= 'A' && s[i+1] <= 'Z')
        {
            s[i+1] = s[i+1] + 32;
        }
        i++;
        
    }

    printf("s= %s",s);
    printf("\nDo dai s: %d", l);
    return 0;
}
//Vo  Quangg  Thanh      Nghia