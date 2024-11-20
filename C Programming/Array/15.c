//Write a c program to take row and column numbers of 2D array and elements from the user and perform addition of both diagonal elements.
#include<stdio.h>
int main()
{
	int a[100][100],i,j,size,sumr=0,suml=0;
	printf("\nEnter the sie of an array = ");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("\nEnter the element in a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nOriginal array = \n");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<size;i++)
	{
		sumr = sumr + a[i][i];
	}
	int temp = size-1;
	for(i=0;i<size;i++)
	{
		suml = suml + a[i][temp];
		temp--;
	}
	printf("\nAddition of right diagonal elements = %d",sumr);
	printf("\nAddition of left diagonal elements = %d",suml);
	return 0;
}
