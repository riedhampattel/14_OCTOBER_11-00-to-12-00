#include<stdio.h>
int main()
{
	int i;
	
	printf("\nFor loop := ");
	for(i=1;i<=5;i++)
	{
		printf("\nTops Technologies");
	}
	
	printf("\nWhile loop  := ");
	i=1;
	while(i<=5)
	{
		printf("\nTops Technologies");
		i++;
	}
	
	printf("\ndo while loop := ");
	i=1;
	do
	{
		printf("\nTops Technologies");
		i++;
	}while(i<=5);
	return 0;
}
