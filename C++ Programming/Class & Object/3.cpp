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
			int r;
			string n;
			double c;
			cout<<"\nEnter the roll = ";
			cin>>r;
			cout<<"\nEnter the name = ";
			cin>>n;
			cout<<"\nEnter the cgpa = ";
			cin>>c;
			roll=r;
			name=n;
			cgpa=c;
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
