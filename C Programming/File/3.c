#include<stdio.h>
int main()
{
	FILE *fp1;
	char str[500];
	fp1=fopen("first.txt","r");
	
	while(fgets(str,500,fp1))
	{
		printf("%s",str);
	}
	return 0;
}
