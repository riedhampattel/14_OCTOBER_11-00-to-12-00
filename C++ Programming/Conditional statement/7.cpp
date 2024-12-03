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
	int i,start,end,j;
	cout<<"\nEnter the starting number = ";
	cin>>start;//5
	cout<<"\nEnter the ending number = ";
	cin>>end;//9
	for(i=start;i<=end;i++)
	{
		for(j=1;j<=10;j++)
		{
			cout<<i<<" x "<<j<<" = "<<i*j<<endl;
		}
	}
	return 0;
}
