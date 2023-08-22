#include<stdio.h>
#include<string.h>
int main()
{
    char n1[6]="India",n2[6]="India";
    int l1,l2,i,f=0;
    l1=strlen(n1);
    l2=strlen(n2);
    if(l1==l2)
    {
        for(i=0;n1[i]!='\0';i++)
        {
            if(n1[i] == n2[i])
              f++;
        }
        if(f==l1)
           printf("Same");
        else
           printf("Not Same");   
    }
    return 0;
}    