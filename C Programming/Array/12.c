//Write a c program to take row and column numbers of 2D array and elements from the user and display the matrix.
#include<stdio.h>
int main()
{
	int a[10][10],i,j,row,col;
	printf("\nEnter the row count = ");
	scanf("%d",&row);
	printf("\nEnter the col count = ");
	scanf("%d",&col);
	//scanning of an array
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("\nEnter the element in a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	//printing of an array
	printf("\n2D Array := \n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
