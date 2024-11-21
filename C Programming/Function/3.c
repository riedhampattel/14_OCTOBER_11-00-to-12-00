//without return type with argument
#include<stdio.h>
void multiplication(int num1,int num2);
int main()
{
	int num1,num2;
	printf("\nEnter the value of num1 = ");
	scanf("%d",&num1);
	printf("\nEnter the value of num2 = ");
	scanf("%d",&num2);
	multiplication(num1,num2);
	return 0;
}
void multiplication(int num1,int num2)
{
	printf("\nThe multiplication is = %d",num1*num2);
}
