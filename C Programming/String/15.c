#include<stdio.h>
void copy(char str2[],char str1[])
{
	int i;
	for(i=0;str1[i]!='\0';i++)
	{
		str2[i] = str1[i];
	}
	printf("\nValue of str1 after copying string = %s",str1);
	printf("\nValue of str2 after copying string = %s",str2);
}
int main()
{
	char str1[100],str2[100];
	printf("\nEnter the value of str1 = ");
	gets(str1);
	printf("\nOriginal value of str1 = %s",str1);	
	printf("\nOriginal value of str2 = %s",str2);
	copy(str2,str1);
	return 0;
}
