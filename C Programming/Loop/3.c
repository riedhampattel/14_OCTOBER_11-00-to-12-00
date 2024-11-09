#include<stdio.h>
int main()
{
	int i,start,end;
	printf("\nEnter the value of start = ");
	scanf("%d",&start);
	printf("\nEnter the value of end = ");
	scanf("%d",&end);
	
	if(start>end)
	{
		for(i=start;i>=end;i--)
		{
			printf("\n%d",i);
		}
	}
	else
	{
		for(i=start;i<=end;i++)
		{
			printf("\n%d",i);
		}
	}
	return 0;
}
