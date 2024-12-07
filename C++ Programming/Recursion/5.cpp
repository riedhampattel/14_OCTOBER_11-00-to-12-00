//Write a c++ program to find nth element of fibonnaci series using recursion
#include<iostream>
using namespace std;
int fibonnaci(int num)
{
	if(num==0)
	{
		return 0;
	}
	else if(num==1)
	{
		return 1;
	}
	else
	{
		return fibonnaci(num-1) + fibonnaci(num-2);
	}
}
int main()
{
	int num;
	cout<<"\nEnter the value of num = ";
	cin>>num;//5
	int ans = fibonnaci(num);
	cout<<"\nnth element of the fibonnaci series is = "<<ans;
	return 0;
}
