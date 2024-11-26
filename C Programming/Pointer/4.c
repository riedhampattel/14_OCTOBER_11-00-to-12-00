#include<stdio.h>
int main()
{
	int size,a[100],i;
	int *ptr = &a;
	printf("\nEnter the size of an array = ");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("\nEnter the elements in a[%d] = ",i);
		scanf("%d",&a[i]);
	}	
	for(i=0;i<size;i++)
	{
		printf("\nValue of a[%d] = %d",i,*(ptr+i));
	}
	return 0;
}
