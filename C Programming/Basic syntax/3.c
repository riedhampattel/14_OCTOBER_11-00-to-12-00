#include<stdio.h>
int main()
{
	int num1 = 10,num2 = 20,ans;
	ans = num1+num2;
	printf("\nThe addition of %d and %d is %d",num1,num2,ans);
	ans = num1-num2;
	printf("\nThe subtraction of %d and %d is %d",num1,num2,ans);

	printf("\nThe multiplication of %d and %d is %d",num1,num2,num1*num2);
	ans = num1/num2;
	printf("\nThe division of %d and %d is %d",num1,num2,ans);
	ans = num1%num2;
	printf("\nThe remainder of %d and %d is %d",num1,num2,ans);
	return 0;
}
