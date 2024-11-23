#include<stdio.h>
int length(char str[])
{
	int count=0,i;
	for(i=0;str[i]!='\0';i++)
	{
		count++;
	}
	return count;
}
int main()
{
	char str[100];
	printf("\nEnter the string = ");
	gets(str);
	printf("\nOriginal value of str = %s",str);
	int ans = length(str);
	printf("\nThe length is = %d",ans);
	return 0;
}
