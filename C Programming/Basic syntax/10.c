#include<stdio.h>
int main()
{
	int num1,num2;
	float ans;
	char ch=70;
	printf("%c",ch);
	printf("\nEnter the value of num1 = ");
	scanf("%d",&num1);
	printf("\nEnter the value of num2 = ");
	scanf("%d",&num2);
	ans = (float)num1/(float)num2;
	printf("\nAnswer is = %.1f",ans);
	return 0;
}
