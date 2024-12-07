#include<iostream>
using namespace std;
void display(int num)
{
	if(num!=0)
	{
		cout<<"\nHello";//1
		display(num-1);
	}
}
int main()
{
	int num;
	cout<<"\nEnter the count = ";
	cin>>num;
	display(num);
	return 0;
}
