#include <stdio.h>
int main() 
{
    char n[7]="Aastha",*P,i;
    P=n;
    i=0;
    while (*(P+i)!='\0')
    {
        printf("%c",*(P+i));
        i++;
    }
    return 0;
}    