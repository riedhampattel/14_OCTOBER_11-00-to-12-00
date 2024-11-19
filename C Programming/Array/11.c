#include<stdio.h>
int main()
{
	int a[3][2],i,j;
	//scanning of an array
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\nEnter the element in a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	//printing of an array
	printf("\n2D Array := \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
