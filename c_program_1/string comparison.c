#include<stdio.h>
#include<string.h>
int main()
{
    int c;
    char n[6]="India",s[6]="India";
    c=strcmp(n,s);
       if(c==0)
         printf("Same");
       else
         printf("Not Same");
    return 0;
}           