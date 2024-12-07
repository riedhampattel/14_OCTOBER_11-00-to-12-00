#include<iostream>
using namespace std;
int main()
{
	int num1,num2,lcm,max;
	cout<<"\nEnter the value of num1 = ";
	cin>>num1;//15
	cout<<"\nEnter the value of num2 = ";
	cin>>num2;//25
	
	max = num1>num2 ? num1:num2;
	
	while(1)
	{
		if(max%num1==0 && max%num2==0)
		{
			lcm = max;
			break;
		}
		max++;
	}
	cout<<"\nLCM = "<<lcm;
	return 0;
}
