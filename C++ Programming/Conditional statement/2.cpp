#include<iostream>
using namespace std;
int main()
{
	int height;
	cout<<"\nEnter the height = ";
	cin>>height;
	
	if(height<150)
	{
		cout<<"\nYou are dwarf";
	}
	else if(height>=150 && height<=200)
	{
		cout<<"\nYou are average heighted";
	}
	else
	{
		cout<<"\nYou are taller";
	}
	return 0;
}
