#include<iostream>
using namespace std;
//hierarchical inheritance
class Parent
{
	public :
		void display()
		{
			cout<<"\nHello from parent class";
		}
};
class Brother : public Parent
{
};
class Sister : public Parent
{
};
int main()
{
	Brother b;
	Sister s;
	b.display();
	s.display();
	return 0;
}
