//Write a C++ program to implement a class called Circle that has private member variables for radius. Include member functions to calculate the circle's area and circumference.
#include<iostream>
using namespace std;
class Circle
{
	private :
		double radius;
	public :
		void set(double r)
		{
			radius = r;
		}
		void area()
		{
			cout<<"\nArea of circle is = "<<3.14*(radius*radius);
		}
		void cir()
		{
			cout<<"\nCircumference of circle is = "<<2*(3.14*radius);
		}
};
int main()
{
	int r;
	Circle c1;
	cout<<"\nEnter the value of radius = ";
	cin>>r;
	c1.set(r);
	c1.area();
	c1.cir();
	return 0;
}
