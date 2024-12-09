#include<iostream>
using namespace std;
class Student
{
	private :
		int roll;
		string name;
		double cgpa;
	public :
		void set()
		{
			int roll;
			string name;
			double cgpa;
			cout<<"\nEnter the roll = ";
			cin>>roll;
			cout<<"\nEnter the name = ";
			cin>>name;
			cout<<"\nEnter the cgpa = ";
			cin>>cgpa;
			this->roll=roll;
			this->name=name;
			this->cgpa=cgpa;
		}
		void get()
		{
			cout<<"\nRoll no. = "<<roll;
			cout<<"\nName. = "<<name;
			cout<<"\ncgpa. = "<<cgpa;
		}
};
int main()
{
	int roll;
	string name;
	double cgpa;
	
	Student s1,s2,s3;
	s1.set();
	s2.set();
	s3.set();
	
	s1.get();
	s2.get();
	s3.get();
	return 0;
}
