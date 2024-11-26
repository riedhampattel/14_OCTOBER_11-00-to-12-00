#include<stdio.h>
struct Student
{
	int roll;
	float pct;
	char grade;
};
int main()
{
	struct Student s[100];
	int size,i;
	printf("\nEnter the size of an array = ");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("\nEnter the roll no. = ");
		scanf("%d",&s[i].roll);
		printf("\nEnter the percentage = ");
		scanf("%f",&s[i].pct);
		printf("\nEnter the grade = ");
		scanf(" %c",&s[i].grade);
	}
	for(i=0;i<size;i++)
	{
		printf("\n\nRoll no. = %d",s[i].roll);
		printf("\nPercentage = %.2f",s[i].pct);
		printf("\nGrade = %c",s[i].grade);
	}
	return 0;
}
