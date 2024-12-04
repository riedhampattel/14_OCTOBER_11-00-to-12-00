#include<iostream>
using namespace std;
int main()
{
	int a[100],index,i,size;
	cout<<"\nEnter the size of an array = ";
	cin>>size;
	
	for(i=0;i<size;i++)
	{
		cout<<"\nEnter the element in a["<<i<<"] = ";
		cin>>a[i];
	}
	
	cout<<"\nEnter the index number = ";
	cin>>index;
	
	if(index<size && index>=0)
	{
		cout<<"\nElement = "<<a[index];
	}
	else
	{
		cout<<"\nMax Index number is = "<<size-1;
	}
	return 0;
}
