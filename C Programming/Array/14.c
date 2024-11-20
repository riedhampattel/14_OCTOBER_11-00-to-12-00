//Write a c program to take row and column numbers of 2D array and elements from the user and print transposed array.
#include<stdio.h>
int main()
{
	int a[100][100],i,j,row,col,t[100][100];
	printf("\nEnter the row number = ");
	scanf("%d",&row);
	printf("\nEnter the col number = ");
	scanf("%d",&col);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("\nEnter the element in a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nOriginal array := \n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			t[j][i] = a[i][j];
		}
	}
	
	printf("\nTransposed array := \n");
	for(i=0;i<col;i++)
	{
		for(j=0;j<row;j++)
		{
			printf("%d ",t[i][j]);
		}
		printf("\n");
	}
	return 0;
}
