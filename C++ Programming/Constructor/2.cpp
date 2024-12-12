#include<iostream>
using namespace std;
class Student
{
	private :
		int id;
		string name;
	public :
		Student(int i,string n)
		{
			id=i;
			name=n;
		}
		Student(int i,string n,double p)
		{
			cout<<"\nId = "<<i;
			cout<<"\nName = "<<n;
			cout<<"\nPercentage = "<<p;
		}
		void display()
		{
			cout<<"\nId = "<<id;
			cout<<"\nName = "<<name;	
		}	
};
int main()
{
	Student s1(101,"Rohan");
	s1.display();
	Student s2(102,"Rahul");
	s2.display();
	Student s3(103,"Prit",98.56);
	return 0;
}
