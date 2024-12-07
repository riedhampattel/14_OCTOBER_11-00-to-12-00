#include<iostream>
using namespace std;
int sum(int num)
{
	if(num!=0)
	{
		return num + sum(num-1);
	}
	else
	{
		return 0;
	}
}
int main()
{
	int range;
	cout<<"\nEnter the range = ";
	cin>>range;
	int ans = sum(range);
	cout<<"\nThe addition is = "<<ans;
	return 0;
}
