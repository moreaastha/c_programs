#include <stdio.h>
int main() 
{
  int a[5]={20,25,30,35,40},*P,i;
  P=&a[0];
  /*for(i=0;i<5;i++)
  {
    printf("%d\n",*P);
    P=P+1;
  }
  printf("%d%u",*P,P);*/
  for(i=0;i<5;i++)
     printf("%d\n",*(P+i));
  printf("%d%u",*P,P);   
  return 0;
}