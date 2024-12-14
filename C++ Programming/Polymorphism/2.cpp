#include<iostream>
using namespace std;
class Shape
{
	public :
		void shape(int a)
		{
			cout<<"\nArea of square is = "<<a*a;
		}
		void shape(double r)
		{
			cout<<"\nArea of circle is = "<<3.14*(r*r);
		}
		void shape(int l,int b)
		{
			cout<<"\nArea of Rectangle is = "<<l*b;
		}
		void shape(double h,double b)
		{
			cout<<"\nArea of Triangle is = "<<0.5*(b*h);
		}
};
int main()
{
	Shape d1;
	d1.shape(15);
	Shape d2;
	d2.shape(4,5);
	Shape d3;
	d3.shape(5.6);
	Shape d4;
	d4.shape(4.5,6.3);
	return 0;
}
