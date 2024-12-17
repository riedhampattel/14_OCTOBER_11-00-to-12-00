#include<iostream>
using namespace std;
class Parent//base class
{
	private :
		int n1 = 10;
		string s1 = "Private";
	protected :
		int n2 = 20;
		string s2 = "Protected";
	public :
		int n3 = 30;
		string s3 = "Public";
};
class Child : public Parent//derived class
{
	public :
		void display()
		{
			cout<<"\nValue of n2 = "<<n2;
			cout<<"\nValue of s2 = "<<s2;
		}
};
int main()
{
	Parent p1;
	//private ---> within the class
//	cout<<"\nValue of n1 = "<<p1.n1;
//	cout<<"\nValue of s1 = "<<p1.s1;

	//protected ---> within the class or in derived class
//	cout<<"\nValue of n2 = "<<p1.n2;
//	cout<<"\nValue of s2 = "<<p1.s2;
	
	Child c;
	c.display();
	
	cout<<"\nValue of n3 = "<<p1.n3;
	cout<<"\nValue of s3 = "<<p1.s3;
	
	return 0;
}
