#include<iostream>
using namespace std;
class Demo
{
	private :
		int n1,n2;
	public :
		Demo()
		{
			n1=0;
			n2=0;
		}
		Demo(int n1,int n2)
		{
			this->n1=n1;
			this->n2=n2;
		}
		void display()
		{
			cout<<"\nValue of n1 = "<<n1;
			cout<<"\nValue of n2 = "<<n2;
		}
		Demo operator+(Demo &obj)
		{
			Demo temp;
			temp.n1 = n1 + obj.n1;
			temp.n2 = n2 + obj.n2;
			return temp;
		}
};
int main()
{
	Demo d1;
	d1.display();
	Demo d2(1,4);
	d2.display();
	int x=10;
	int y=20;
	int z=x+y;
	cout<<"\nZ = "<<z;
	Demo d3=d1+d2;
	d3.display();
	Demo d4=d2+d3;
	d4.display();
	return 0;
}
