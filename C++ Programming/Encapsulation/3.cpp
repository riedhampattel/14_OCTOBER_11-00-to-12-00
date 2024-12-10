//Write a C++ program to create a class called Person that has private member variables for name, age and country. Implement member functions to set and get the values of these variables.
#include<iostream>
using namespace std;
class Person
{
	private :
		string name,country;
		int age;
	public :
		void set()
		{
			string name,country;
			int age;
			cout<<"\nEnter the name = ";
			cin>>name;
			cout<<"\nEnter the age = ";
			cin>>age;
			cout<<"\nEnter the country = ";
			cin>>country;
			this->name = name;
			this->age = age;
			this->country = country;
		}
		void get()
		{
			cout<<"\nName = "<<name;
			cout<<"\nAge = "<<age;
			cout<<"\nCountry = "<<country<<endl;
		}
};
int main()
{
	Person p1,p2;
	p1.set();
	p2.set();
	
	p1.get();
	p2.get();
	return 0;
}
