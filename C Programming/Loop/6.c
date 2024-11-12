<<<<<<< HEAD
//Write a c program to take one input from the user and check whether the number is Armstrong or not?
#include<stdio.h>
#include<math.h>
int main()
{
	int num,digit=0,power,sum=0,i,rem;
	printf("\nEnter the number = ");
	scanf("%d",&num);
	int temp = num;
	int copy = num;
	
	while(num!=0)
	{
		num = num/10;
		digit++;
	}
	
	for(i=1;i<=digit;i++)
	{
		rem = temp%10;
		power = pow(rem,digit);
		sum = sum + power;
		temp = temp/10;
	}
	if(sum==copy)
	{
		printf("\n%d is an armstrong number",copy);
	}
	else
	{
		printf("\n%d is not an armstrong number",copy);
	}
	return 0;
}
=======
//Write a c program to take one input from the user and check whether the number is strong or not?
#include<stdio.h>
int main()
{
	int num,sum=0,rem,i,fact=1;
	printf("\nEnter the number = ");
	scanf("%d",&num);
	int temp = num;
	
	while(num!=0)
	{
		rem = num%10;
		fact = 1;
		for(i=1;i<=rem;i++)
		{
			fact = fact * i;
		}
		sum = sum + fact;
		num = num/10;
	}
	if(sum==temp)
	{
		printf("\n%d is a strong number",temp);
	}
	else
	{
		printf("\n%d is not a strong number",temp);
	}
	return 0;
}
>>>>>>> 60e124a780327d6967d954f79f1ad14e1cf2eb9d
