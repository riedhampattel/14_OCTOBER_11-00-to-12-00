#include<stdio.h>
int main()
{
	int num;
	start :
	printf("\nEnter the number = ");
	scanf("%d",&num);
	printf("\nValue of num = %d",num);
	if(num==-1)
	{
		goto end;
	}
	goto start;
	end :
	return 0;
}
