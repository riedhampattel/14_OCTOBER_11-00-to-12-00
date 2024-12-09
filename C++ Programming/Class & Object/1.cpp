#include<iostream>
using namespace std;
class Student
{
	public :
		int roll;
		string name;
		double CGPA;
		void display()
		{
			cout<<"\nHello world";	
		}	
};
int main()
{
	Student s1;
	s1.display();
	s1.roll = 101;
	s1.name = "Rahul";
	s1.CGPA = 8.6;
	
	cout<<"\nRoll = "<<s1.roll;
	cout<<"\nName = "<<s1.name;
	cout<<"\nCGPA = "<<s1.CGPA;
	return 0;
}
