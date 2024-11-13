#include<stdio.h>
int main()
{
	int terms,i,num1=0,num2=1,num3;
	printf("\nEnter the terms = ");
	scanf("%d",&terms);
	printf("\nFibonacci series = %d %d ",num1,num2);
	
	for(i=1;i<=terms-2;i++)
	{
		num3 = num1 + num2;
		printf("%d ",num3);
		num1=num2;
		num2=num3;
	}
	return 0;
}