<<<<<<< HEAD
//Write a c program to take a number as an input from the user find the count of digits
#include<stdio.h>
int main()
{
	int num,digit=0;
	printf("\nEnter the value of num = ");
	scanf("%d",&num);//153
	
	while(num!=0)
	{
		digit++;//3
		num = num/10;
	}
	printf("\nThis is %d digit number",digit);
	return 0;
}
=======
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
>>>>>>> 60e124a780327d6967d954f79f1ad14e1cf2eb9d
