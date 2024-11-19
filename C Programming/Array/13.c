//Write a c program to take row and column numbers of 2D array and elements from the user and make one calculator with addition, subtraction and multiplication facilities using control statement.
#include<stdio.h>
int main()
{
	char ch;
	int a[100][100],b[100][100],ans[100][100];
	int i,j,k,size;
	printf("\nEnter the size of an array = ");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("\nEnter the elements in array a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("\nEnter the elements in array b[%d][%d] = ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	printf("\nArray a := \n");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("\nArray b := \n");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	printf("\nPress '+' for addition");
	printf("\nPress '-' for subtraction");
	printf("\nPress '*' for multiplication");
	printf("\nEnter your choice = ");
	scanf(" %c",&ch);
	
	switch(ch)
	{
		case '+':
			for(i=0;i<size;i++)
			{
				for(j=0;j<size;j++)
				{
					ans[i][j] = a[i][j] + b[i][j];
				}
			}
			printf("\nArray ans := \n");
			for(i=0;i<size;i++)
			{
				for(j=0;j<size;j++)
				{
					printf("%d ",ans[i][j]);
				}
			printf("\n");
			}
		break;
		case '-':
			for(i=0;i<size;i++)
			{
				for(j=0;j<size;j++)
				{
					ans[i][j] = a[i][j] - b[i][j];
				}
			}
			printf("\nArray ans := \n");
			for(i=0;i<size;i++)
			{
				for(j=0;j<size;j++)
				{
					printf("%d ",ans[i][j]);
				}
			printf("\n");
			}
		break;
		case '*':
			for(i=0;i<size;i++)//row
			{
				for(j=0;j<size;j++)//col
				{
					ans[i][j] = 0;
					for(k=0;k<size;k++)//col
					{
						ans[i][j] = ans[i][j] + (a[i][k]*b[k][j]);
					}
				}
			}
			printf("\nArray ans := \n");
			for(i=0;i<size;i++)
			{
				for(j=0;j<size;j++)
				{
					printf("%d ",ans[i][j]);
				}
			printf("\n");
			}
		break;
		default : printf("\nInvalid choice");
	}
	return 0;
}
