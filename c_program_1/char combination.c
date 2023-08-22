#include<stdio.h>
int main()
{
    int i;
    char n[6];
    printf("Enter your name :");
    for(i=0;i<5;i++)
       scanf("%c",&n[i]);
       printf("Your name is :");
       puts(n);
    return 0;
}       