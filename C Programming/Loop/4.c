//Write a c program to find a factorial of given number
#include<stdio.h>
int main()
{
	int num,fact=1,i;
	printf("\nEnter the number = ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		fact = fact * i;
	}
	printf("\nFactorial of %d is %d",num,fact);
	return 0;
}