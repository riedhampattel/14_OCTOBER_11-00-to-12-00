#include<iostream>
using namespace std;
//simple inheritance
class Parent//base class
{
	public :
		void display()
		{
			cout<<"\nHello from Parent class";
		}
};
class Child : public Parent//derived class
{
	
};
int main()
{
//	Parent p1;
//	p1.display();
	Child c1;
	c1.display();
	return 0;
}
