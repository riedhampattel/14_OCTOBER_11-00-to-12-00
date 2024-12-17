#include<iostream>
using namespace std;
class Demo
{
	private :
		int n=10;
		string s="Private";
	public :
		friend void display(Demo &obj);
};
void display(Demo &obj)
{
	cout<<"\nValue of n = "<<obj.n;
	cout<<"\nValue of s = "<<obj.s;
}
int main()
{
	Demo d1;
	display(d1);
	return 0;
}
