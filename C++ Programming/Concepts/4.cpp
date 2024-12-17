#include<iostream>
using namespace std;
class Student
{
	public :
		int stid;
		string name;
		double cgpa;
		Student(int stid,string name,double cgpa)
		{
			this->stid = stid;
			this->name = name;
			this->cgpa = cgpa;
		}
};
class Address
{
	private :
		string city;
		int stid;
		Student *ref;
	public :
		Address(string city,Student *ref)
		{
			this->city = city;
			this->ref = ref;
		}
		void display()
		{
			cout<<"\nId = "<<ref->stid;
			cout<<"\nName = "<<ref->name;
			cout<<"\nCity = "<<city;
		}
};
int main()
{
	Student s1(101,"Rahul",8.6);
	Student s2(102,"Rakesh",9.8);
	Address a1("Rajkot",&s2);
	a1.display();
	return 0;
}
