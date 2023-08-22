#include <stdio.h>
int main() 
{
  int (*P)(),call();
  P=&call;
  printf("%d\n",call());
  return 0;
}
int call()
{
  return 20;
}