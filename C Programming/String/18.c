#include<stdio.h>
void upper(char str[])
{
	int i;
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>='a' && str[i]<='z')
		{
			str[i] = str[i] - 32;
		}
	}
	printf("\nThe value of str after using upper() function = %s",str);
}
int main()
{
	char str[100];
	printf("\nEnter the string = ");
	gets(str);
	
	printf("\nOriginal value of string = %s",str);
	
	upper(str);
	return 0;
}
