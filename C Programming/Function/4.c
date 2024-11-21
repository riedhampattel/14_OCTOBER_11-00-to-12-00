//without return type without argument
#include<stdio.h>
void division();
int main()
{
	division();
	return 0;
}
void division()
{
	int num1,num2;
	printf("\nEnter the value of num1 = ");
	scanf("%d",&num1);
	printf("\nEnter the value of num2 = ");
	scanf("%d",&num2);
	printf("\nThe division is = %.2f",(float)num1/(float)num2);
}
