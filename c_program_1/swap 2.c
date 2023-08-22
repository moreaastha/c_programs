#include <stdio.h>
void main() 
{
  void swap();
  int a,b;
  printf("Enter a and b :");
  scanf("%d",&a,&b);
  swap(&a,&b);
  printf("%d%d",a,b);
}
void swap(int *P,int *q)
{
    int t;
    t=*P;
    *P=*q;
    *q=t;
}  