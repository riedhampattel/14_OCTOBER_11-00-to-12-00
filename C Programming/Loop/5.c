//Write a c program to take one input from the user and check whether the number is prime or not?
#include<stdio.h>
int main()
{
	int num,count=0,i;
	printf("\nEnter the number to check whether it is prime or not = ");
	scanf("%d",&num);
	
	for(i=2;i<num;i++)
	{
		if(num%i==0)
		{
			count++;
		}
	}
	if(count==0)
	{
		printf("\n%d is a prime number",num);
	}
	else
	{
		printf("\n%d is not a prime number",num);
	}
	return 0;
}