//Write a program in C++ to find the Greatest Common Divisor (GCD) of two numbers.
#include<iostream>
using namespace std;
int main()
{
	int num1,num2,count,i,GCD;
	cout<<"\nEnter the value of num1 = ";
	cin>>num1;//25
	cout<<"\nEnter the value of num2 = ";
	cin>>num2;//15
	
	count = num1<num2?num1:num2;
	for(i=1;i<=count;i++)
	{
		if(num1%i==0 && num2%i==0)
		{
			GCD = i;
		}
	}
	cout<<"\nGCD = "<<GCD;
	return 0;
}
