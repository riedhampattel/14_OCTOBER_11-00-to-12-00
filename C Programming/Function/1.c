//with return type with argument
#include<stdio.h>
int add(int num1,int num2);//declaration
int main()
{
	int ans,num1,num2;
	printf("\nEnter the value of num1 = ");
	scanf("%d",&num1);
	printf("\nEnter the value of num2 = ");
	scanf("%d",&num2);
	ans=add(num1,num2);
	printf("\nThe addition is = %d",ans);
	return 0;
}

int add(int num1,int num2)
{
	return num1+num2;
}
