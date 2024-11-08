#include<stdio.h>
int main()
{
	int year;
	printf("\nEnter the year = ");
	scanf("%d",&year);//2023
	
	if(year%4==0)
	{
		printf("\nThis is a leap year");
	}
	else
	{
		printf("\nThis is not a leap year");
	}
	return 0;
}
