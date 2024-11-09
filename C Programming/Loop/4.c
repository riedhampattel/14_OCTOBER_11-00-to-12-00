//Write a c program to take a number from the user and display it's factorial.
#include<stdio.h>
int main()
{
	int num,i,fact=1;
	printf("\nEnter any number to find factorial = ");
	scanf("%d",&num);
	
//	for(i=num;i>=1;i--)
//	{
//		fact = fact * i;
//	}

	for(i=1;i<=num;i++)
	{
		fact = fact * i;
	}
	
	printf("\nFactorial of %d is %d",num,fact);
	return 0;
}
