#include<stdio.h>
int sum(int arr[],int size);
int main()
{
	int size,a[100],i;
	printf("\nEnter the size of an array = ");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("\nEnter the element in a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	int ans = sum(a,size);
	printf("\nThe addition is = %d",ans);
	return 0;
}
int sum(int arr[],int size)
{
	int ans=0,i;
	for(i=0;i<size;i++)
	{
		ans = ans + arr[i];
	}
	return ans;
}
