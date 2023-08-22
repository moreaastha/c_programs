#include <stdio.h>
int main() 
{
  int *x;
  x=demo();
  printf("%d",*x);
}
int * demo()
{
  int a=20,*P;
  P=&a;
  printf("%d",a);
  a++;
  return (&a);
}