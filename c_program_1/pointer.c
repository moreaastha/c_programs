#include <stdio.h>
int main() 
{
  int a=20,*P;
  P=&a;
  printf("%d\n",a);
  printf("%u\n",P);
  printf("%d\n",*P);
  printf("%u\n",&P);
  printf("%d\n",&*P);
  printf("%d\n",*&P);
return 0;
}