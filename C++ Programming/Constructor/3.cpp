#include<iostream>
using namespace std;
class Student
{
	public :
		int id;
		string name;
		Student()
		{
			
		}
		Student(Student &obj)
		{
			cout<<"\nCopy constructor called";
			id = obj.id;
			name = obj.name;
		}
};
int main()
{
	Student s1,s2;
	
	s1.id=101;
	s1.name="Rohan";
	cout<<"\nId = "<<s1.id;
	cout<<"\nName = "<<s1.name<<endl;
	
	s2.id=102;
	s2.name="Prit";
	cout<<"\nId = "<<s2.id;
	cout<<"\nName = "<<s2.name<<endl;
	
	Student s3=s1;
	cout<<"\nId = "<<s3.id;
	cout<<"\nName = "<<s3.name<<endl;
	
	Student s4(s2);
	cout<<"\nId = "<<s4.id;
	cout<<"\nName = "<<s4.name<<endl;
	return 0;
}
