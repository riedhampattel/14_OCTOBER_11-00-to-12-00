//Write a c program to take size of an array and elements from the user and print the sum and average of all the elements
#include<stdio.h>
int main()
{
	int i,size,a[100],sum=0;
	printf("\nEnter the size of an array = ");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("\nEnter an element in a[%d] = ",i);
		scanf("%d",&a[i]);
		sum = sum + a[i];
	}
	printf("\nElements of an array = ");
	for(i=0;i<size;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\nThe addition of elements is = %d",sum);
	printf("\nThe Average of elements is = %f",(float)sum/(float)size);
	return 0;
}
