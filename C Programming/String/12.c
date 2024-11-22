#include<stdio.h>
int main()
{
	char string[100],i;
	printf("\nEnter the string = ");
	gets(string);
	
	printf("\nString = ");
	for(i=0;string[i]!='\0';i++)
	{
		printf("%c",string[i]);
	}
	return 0;
}
