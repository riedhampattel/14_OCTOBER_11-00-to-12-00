/*
Write a program in C++ to display the multiplication table for a given integer.
Test Data :
Input the number (Table to be calculated) : 15
Expected Output :
15 X 1 = 15
...
...
15 X 10 = 150
*/
#include<iostream>
using namespace std;
int main()
{
	int num,i,start,end;
	cout<<"\nEnter the number = ";
	cin>>num;
	cout<<"\nEnter the starting number = ";
	cin>>start;
	cout<<"\nEnter the ending number = ";
	cin>>end;
	for(i=start;i<=end;i++)
	{
		cout<<num<<" x "<<i<<" = "<<num*i<<endl;
	}
	return 0;
}
