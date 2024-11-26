#include<stdio.h>
int main()
{
	int a[5] = {1,2,3,4,5};
	int *ptr = &a;
	
	printf("\nAddress of array = %p",ptr);
	printf("\nAddress of element a[0] = %p",&a[0]);
	printf("\nAddress of element a[1] = %p",&a[1]);
	printf("\nAddress of element a[2] = %p",&a[2]);
	printf("\nAddress of element a[3] = %p",&a[3]);
	printf("\nAddress of element a[4] = %p",&a[4]);
	
	printf("\nValue of element a[0] = %d",*ptr);
	printf("\nValue of element a[1] = %d",*ptr+1);
	printf("\nValue of element a[2] = %d",*ptr+2);
	printf("\nValue of element a[3] = %d",*ptr+3);
	printf("\nValue of element a[4] = %d",*ptr+4);
	return 0;
}
