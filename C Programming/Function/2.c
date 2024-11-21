//with return type without argument
#include<stdio.h>
int subtraction();

int main()
{
	int ans=subtraction();
	printf("\nThe answer is = %d",ans);
	return 0;
}

int subtraction()
{
	int ans,num1,num2;
	printf("\nEnter the value of num1 = ");
	scanf("%d",&num1);
	printf("\nEnter the value of num2 = ");
	scanf("%d",&num2);
	return num1-num2;
}
