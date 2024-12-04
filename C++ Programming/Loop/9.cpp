#include<iostream>
using namespace std;
int main()
{
	int a[100],size,element,i,index,count=0;
	cout<<"\nEnter the size of an array = ";
	cin>>size;
	for(i=0;i<size;i++)
	{
		cout<<"\nEnter the element in a["<<i<<"] = ";
		cin>>a[i];
	}
	cout<<"\nEnter the element = ";
	cin>>element;
	
	for(i=0;i<size;i++)
	{
		if(element==a[i])
		{
			index = i;
			count++;
		}
	}
	if(count==0)
	{
		cout<<"\nElement is not present in an array";
	}
	else
	{
		cout<<"Index number = "<<index;
	}
	return 0;
}
