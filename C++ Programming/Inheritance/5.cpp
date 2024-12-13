#include<iostream>
using namespace std;
//hybrid inheritance
class GrandParent
{
	public :
		void grandparent_display()
		{
			cout<<"\nHello from grand parent class";
		}
};
class Father : public GrandParent
{
	public :
		void father_display()
		{
			cout<<"\nHello from father class";
		}
};
class Uncle : public GrandParent
{
	public :
		void uncle_display()
		{
			cout<<"\nHello from uncle class";
		}
};
class Cousin : public Uncle
{
};
class Son : public Father
{
};
int main()
{
//	Father f;
//	f.father_display();
//	f.grandparent_display();
//	Uncle u;
//	u.uncle_display();
//	u.grandparent_display();
	Cousin c;
	c.grandparent_display();
	c.uncle_display();
	Son s;
	s.grandparent_display();
	s.father_display();
	return 0;
}
