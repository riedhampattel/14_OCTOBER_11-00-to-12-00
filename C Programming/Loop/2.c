//Write a c program to take 2 numbers from the user and print all the numbers between those numbers
#include<stdio.h>
int main()
{
	int i,start,end;
	printf("\nEnter the starting value = ");
	scanf("%d",&start);//5
	printf("\nEnter the ending value = ");
	scanf("%d",&end);//10
	
	for(i=start;i<=end;i++)
	{
		printf("\n%d",i);
	}
	return 0;
}
