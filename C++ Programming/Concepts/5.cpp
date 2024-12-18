#include<iostream>
using namespace std;
class Shape//abstract class
{	
	public :
		virtual void draw()
		{
			cout<<"\nShape class";
		}
};
class Circle : public Shape
{
	public :
		int draw(int n)
		{
			cout<<"\nWe are drawing circle";
			cout<<"\nRadius of circle = "<<n;
		}
};
class Square : public Shape
{
	public :
		void draw()
		{
			cout<<"\nWe are drawing square";
		}
};
int main()
{
	Shape s;
	s.draw();
	Circle c;
	c.draw(5);
	return 0;
}
