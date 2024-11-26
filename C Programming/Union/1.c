#include<stdio.h>
union Student
{
	int roll;
	char grade;
};
int main()
{
	union Student s1;
	
	s1.roll=97;
	s1.grade='A';
	
	printf("\nroll = %d",s1.roll);
	printf("\ngrade = %c",s1.grade);
	return 0;
}
