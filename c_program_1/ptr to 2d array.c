#include <stdio.h>
int main() 
{
  int a[3][3]={1,2,3,4,5,6,7,8,9},*P,i,j;
  P=&a[0][0];
  for(i=0;i<3;i++)
  {
    for(j=0;j<=2;j++)
    {
        printf("%d\t",*P);
        P++;
    }
    printf("\n");
  }
  return 0;
}