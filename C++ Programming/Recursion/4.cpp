//Write a c++ program to find addition of all the elements present in an array using recursion
#include<iostream>
using namespace std;
int sumarr(int arr[],int size)
{
	if(size>0)
	{
		return arr[size-1] + sumarr(arr,size-1);
	}
	else
	{
		return 0;
	}
}
int main()
{
	int size,a[100],i;
	cout<<"\nEnter the size of an array = ";
	cin>>size;//5
	for(i=0;i<size;i++)
	{
		cout<<"\nEnter the element in a["<<i<<"] = ";
		cin>>a[i];
	}
	int ans = sumarr(a,size);
	cout<<"\nThe answer is = "<<ans;
	return 0;
}
