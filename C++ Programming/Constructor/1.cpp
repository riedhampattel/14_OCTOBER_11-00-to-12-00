#include<iostream>
using namespace std;
class Student
{
	public :
		int id;
		string name;
		Student()//default constructor
		{
			cout<<"\nObject created";
		}
		~Student()
		{
			cout<<"\nObject destroyed";
		}
};
int main()
{
	Student s1;
	int n1=10,n2=20;
	int ans = n1+n2;
	cout<<"\n"<<ans;
	Student s2;
	return 0;
}
