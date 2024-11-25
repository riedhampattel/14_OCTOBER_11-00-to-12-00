#include<stdio.h>
int compare(char str1[],char str2[])
{
	int i,count=0;
	for(i=0;str2[i]!='\0';i++)
	{
		if(str1[i]!=str2[i])
		{
			count = -1;
		}
	}
	return count;
}
int main()
{
	char str1[100],str2[100];
	printf("\nEnter the value in str1 = ");
	gets(str1);
	printf("\nEnter the value in str2 = ");
	gets(str2);
	
	int result = compare(str1,str2);
	
	if(result == 0)
	{
		printf("\nBoth the strings are same");
	}
	else
	{
		printf("\nBoth the strings are different");
	}
	return 0;
}
