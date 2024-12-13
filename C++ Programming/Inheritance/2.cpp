#include<iostream>
using namespace std;
//multilevel inheritance
class Parent//base class
{
	public :
		void Parent_display()
		{
			cout<<"\nHello from Parent class";
		}
};
class Child : public Parent//derived class
{
	public :
		void Child_display()
		{
			cout<<"\nHello from Child class";
		}
};
class GrandChild : public Child
{
	public :
		void GC_display()
		{
			cout<<"\nHello from GrandChild class";
		}
};
class GreatGrandChild : public GrandChild
{
	
};
int main()
{
//	Parent p1;
//	p1.Parent_display();
//	Child c1;
//	c1.Parent_display();
//	c1.Child_display();
//	GrandChild gc;
//	gc.Parent_display();
//	gc.Child_display();
//	gc.GC_display();
	GreatGrandChild ggc;
	ggc.Parent_display();
	ggc.Child_display();
	ggc.GC_display();
	return 0;
}
