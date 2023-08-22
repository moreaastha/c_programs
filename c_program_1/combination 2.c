#include<stdio.h>
int main()
{
    int i;
    char n[15];
    printf("Enter your name :");
    scanf("%[^\n]s",n);
    printf("Your name is :");
    for(i=0;n[i]!='\0';i++)
       printf("%c",n[i]);
    return 0;
}       