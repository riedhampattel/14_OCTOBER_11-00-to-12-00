#include<iostream>
using namespace std;
int power(int b,int e)
{
	if(e!=0)
	{
		return b * power(b,e-1);
	}
	else
	{
		return 1;
	}
}
int main()
{
	int base,exponent;
	cout<<"\nEnter the base = ";
	cin>>base;//2
	cout<<"\nEnter the exponent = ";
	cin>>exponent;//4
	int ans = power(base,exponent);
	cout<<"\nThe power is = "<<ans;
	return 0;
}
