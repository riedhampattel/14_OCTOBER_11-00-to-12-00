//Write a C++ program to create a class called Person that has private member variables for name, age and country. Implement member functions to set and get the values of these variables.
#include<iostream>
using namespace std;
class Person
{
	private :
		string name,country;
		int age;
	public :
		void set(string name,int age,string country)
		{
			this->name = name;
			this->age = age;
			this->country = country;
		}
		void get()
		{
			cout<<"\nName = "<<name;
			cout<<"\nAge = "<<age;
			cout<<"\nCountry = "<<country;
		}
};
int main()
{
	Person p1;
	p1.set("Rohan",25,"India");
	p1.get();
	return 0;
}
