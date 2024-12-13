#include<iostream>
using namespace std;
//multiple inheritance
class Father//base class
{
	public :
		void father_display()
		{
			cout<<"\nHello from father class";
		}
};
class Mother//base class
{
	public :
		void mother_display()
		{
			cout<<"\nHello from mother class";
		}
};
class Child : public Father,public Mother//derived class
{
	
};
int main()
{
	Child c;
	c.father_display();
	c.mother_display();
	return 0;
}
