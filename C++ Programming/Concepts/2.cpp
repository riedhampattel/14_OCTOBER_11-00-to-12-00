#include<iostream>
using namespace std;
class GrandParent
{
	public :
		GrandParent()
		{
			cout<<"\nGrand Parent's constructor called";
		}
		void grandparent_display()
		{
			cout<<"\nHello from grand parent class";
		}
};
class Father : virtual public GrandParent
{
	public :
		Father()
		{
			cout<<"\nFather's constructor called";
		}
		void father_display()
		{
			cout<<"\nHello from father class";
		}
};
class Mother : virtual public GrandParent
{
	public :
		Mother()
		{
			cout<<"\nMother's constructor called";
		}
		void mother_display()
		{
			cout<<"\nHello from mother class";
		}
};
class Son : public Father,public Mother
{
	public :
		Son()
		{
			cout<<"\nSon's constructor called";
		}
};
int main()
{
//	Father f;
//	f.grandparent_display();
//	f.father_display();
//	Mother m;
//	m.grandparent_display();
//	m.mother_display();
	Son s;
//	s.father_display();
//	s.mother_display();
//	s.grandparent_display();
	return 0;
}
