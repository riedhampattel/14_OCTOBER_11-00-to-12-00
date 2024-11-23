#include<stdio.h>
void reverse(char str[])
{
	char rev[100],i,count=0;
	for(i=0;str[i]!='\0';i++)
	{
		count++;
	}
	for(i=0;str[i]!='\0';i++)
	{
		rev[i] = str[count-1];
		count--;
	}
	printf("\nReversed string = ");
	for(i=0;str[i]!='\0';i++)
	{
		printf("%c",rev[i]);
	}
}
int main()
{
	char str[100];
	printf("\nEnter the string = ");
	gets(str);
	printf("\nOriginal value of str = %s",str);
	reverse(str);
	return 0;
}
