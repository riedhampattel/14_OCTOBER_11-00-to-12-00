#include<iostream>
using namespace std;
class Student
{
	private :
		int roll;
		string name;
		double cgpa;
	public :
		void set(int i,string s,double c)
		{
			roll=i;
			name=s;
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
	cout<<"\nEnter the roll = ";
	cin>>roll;
	cout<<"\nEnter the name = ";
	cin>>name;
	cout<<"\nEnter the cgpa = ";
	cin>>cgpa;
	Student s1;
	s1.set(roll,name,cgpa);
	
	cout<<"\nEnter the roll = ";
	cin>>roll;
	cout<<"\nEnter the name = ";
	cin>>name;
	cout<<"\nEnter the cgpa = ";
	cin>>cgpa;
	Student s2;
	s2.set(roll,name,cgpa);
	
	
	cout<<"\nEnter the roll = ";
	cin>>roll;
	cout<<"\nEnter the name = ";
	cin>>name;
	cout<<"\nEnter the cgpa = ";
	cin>>cgpa;
	Student s3;
	s3.set(roll,name,cgpa);
	
	s1.get();
	s2.get();
	s3.get();
	return 0;
}
