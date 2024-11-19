#include<stdio.h>
int main()
{
	int a[3][2] = {{1,2},{3,4},{5,6}},i,j;
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
