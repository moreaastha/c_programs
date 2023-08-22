#include<stdio.h>
int main()
{
    int i;
    char n[12];
    printf("Enter your name :");
    for(i=0;i<12;i++)
    {
        scanf("%c",&n[i]);
        printf("%c",n[i]);
    }    
    return 0;
}