#include<stdio.h>
#include<string.h>
int main()
{
    char i,j,n1[6]="Good",n2[8]="Evening",n3[13];
    for(i=0;n1[i]!='\0';i++)
       n3[i]=n1[i];
    j=i;
    for(i=0;n2[i]!='\0';i++,j++)
       n3[j]=n2[i];
    strcat(n3,"\0");
    printf("%s\n\n",n3);
    return (0);
}          