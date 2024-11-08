#include<stdio.h>
int main()
{
	int year;
	printf("\nEnter the year = ");
	scanf("%d",&year);//2023
	
	switch(year%4==0)
	{
		case 1:
			printf("\nThis is a leap year");
		break;
		case 0:
			printf("\nThis is not a leap year");
	}
	return 0;
}
