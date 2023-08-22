#include <stdio.h>
int main() 
{
    void demo(int*);
    int a[5]={3,6,9,12,15},i,*P;
    for(i=0;i<5;i++)
        demo(&a[i]);
}
void demo(int *P)
{
    printf("%d\t",*P);
}        
