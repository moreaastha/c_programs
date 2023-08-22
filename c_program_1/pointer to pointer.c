#include <stdio.h>
int main() 
{
    int a=10,*P,**Z;
    P=&a;
    Z=&P;
    printf("%d\n",&P);
    printf("%u\n",&a);
    printf("%d\n",&Z);
    printf("%u\n",&**Z);
    printf("%d\n",&*P);
    printf("%d\n",*&P);
    printf("%d\n",&*Z);
    printf("%d\n",&*&Z);
    printf("%d\n",*&*P);
return 0;
}