#include<stdio.h>
void lower(char str[])
{
	int i;
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>='A' && str[i]<='Z')
		{
			str[i] = str[i] + 32;
		}
	}
	printf("\nThe value of str after using lower() function = %s",str);
}
int main()
{
	char str[100];
	printf("\nEnter the string = ");
	gets(str);
	
	printf("\nOriginal value of string = %s",str);
	
	lower(str);
	return 0;
}
