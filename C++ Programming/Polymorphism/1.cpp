#include<iostream>
using namespace std;
class Shape
{
	public :
		Shape()
		{
			
		}
		Shape(int a)
		{
			cout<<"\nArea of square is = "<<a*a;
		}
		Shape(double r)
		{
			cout<<"\nArea of circle is = "<<3.14*(r*r);
		}
		Shape(int l,int b)
		{
			cout<<"\nArea of Rectangle is = "<<l*b;
		}
		Shape(double h,double b)
		{
			cout<<"\nArea of Triangle is = "<<0.5*(b*h);
		}
};
int main()
{
	Shape d1;
	Shape d2(15);
	Shape d3(5.6);
	Shape d4(1,2);
	Shape d5(2.5,3.0);
	return 0;
}
