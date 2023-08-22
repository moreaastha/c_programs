#include<stdio.h>
int main()
{ 
    int a; 
	float i;
	printf("Enter a number: ");
	scanf("%d",&a);
	for(i=1;i<=a/2;i=i+0.01)
	{
		if(i*i==a)
		{
			printf("Square root of %d is %f",a,i);
			break;
		}
	}	
    return 0;
}
 /*|| a-(i*i)<0.1 || (i*i)-a<0.1*/