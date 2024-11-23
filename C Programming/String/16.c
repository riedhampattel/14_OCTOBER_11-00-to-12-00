#include<stdio.h>
void concat(char str1[],char str2[],char str3[])
{
	int i,count=0;
	for(i=0;str1[i]!='\0';i++)
	{
		str3[i] = str1[i];
		count++;
	}
	for(i=0;str2[i]!='\0';i++)
	{
		str3[count] = str2[i];
		count++;
	}
	printf("\nConcated string = ");
	for(i=0;i<count;i++)
	{
		printf("%c",str3[i]);
	}
}
int main()
{
	char str1[100],str2[100],str3[200];
	printf("\nEnter the value of str1 = ");
	gets(str1);
	printf("\nEnter the value of str2 = ");
	gets(str2);
	printf("\nOriginal value of str1 = %s",str1);
	printf("\nOriginal value of str2 = %s",str2);
	
	concat(str1,str2,str3);
	return 0;
}
