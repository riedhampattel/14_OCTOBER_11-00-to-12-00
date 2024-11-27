#include<stdio.h>
int main()
{
	FILE *fp1,*fp2;
	fp1=fopen("first.txt","a");
	fprintf(fp1,"\nThis is my first file");
	
	fp2=fopen("second.txt","a");
	fprintf(fp2,"\nThis is my second file");
	fclose(fp1);
	fclose(fp2);
	return 0;
}
