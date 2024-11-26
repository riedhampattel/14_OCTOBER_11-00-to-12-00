#include<stdio.h>
struct Student
{
	int roll;
	float pct;
	char grade;
};
int main()
{
	struct Student s1;
	s1.roll = 101;
	s1.pct = 95.64;
	s1.grade = 'A';
	
	printf("\nroll = %d",s1.roll);
	printf("\npercentage = %.2f",s1.pct);
	printf("\ngrade = %c",s1.grade);
	return 0;
}
