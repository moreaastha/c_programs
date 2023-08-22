//register int a;

#include<stdio.h>
int main()
{
    register int i=10;
    {
        register int i=20;
        printf("\n\t %d",i);
    }
printf("\n\n\t %d",i);
return 0;
}    

    
