#include<iostream>
using namespace std;
int factorial(int num)
{
	if(num!=0)
	{
		return num * factorial(num-1);
	}
	else
	{
		return 1;
	}
}
int main()
{
	int num;
	cout<<"\nEnter the value of num = ";
	cin>>num;//4
	int ans = factorial(num);
	cout<<"\nFactorial of "<<num<<" is = "<<ans;
	return 0;
}
