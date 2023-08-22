#include <stdio.h>
int main() 
{
  int a[3][5],*P,i,j,*q;
  P=&a[0][0];
  for(i=0;i<3;i++)
  {
    P=&a[i];
    q=P;
    for(j=0;j<5;j++)
       printf("%d\t",*q++);
    printf("\n");  
    return 0; 
  }
}