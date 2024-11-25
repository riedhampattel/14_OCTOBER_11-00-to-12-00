#include<stdio.h>
int main()
{
	int a=10,b=20;
	int *ptra = &a;
	int* ptrb = &b;
	
	printf("\nValue of a = %d",a);
	printf("\nAddress of a = %p",ptra);
	printf("\nValue of b = %d",b);
	printf("\nAddress of b = %p",ptrb);
	return 0;
}
