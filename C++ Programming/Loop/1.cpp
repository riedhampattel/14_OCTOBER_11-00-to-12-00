#include<iostream>
using namespace std;
int main()
{
	int size,a[100][100],b[100][100],ans[100][100],i,j,k;
	cout<<"\nnEnter the size of an array = ";
	cin>>size;
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			cout<<"\nEnter the element in a["<<i<<"]["<<j<<"] = ";
			cin>>a[i][j];
		}
	}
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			cout<<"\nEnter the element in b["<<i<<"]["<<j<<"] = ";
			cin>>b[i][j];
		}
	}
	for(i=0;i<size;i++)//row
	{
		for(j=0;j<size;j++)//col
		{
			ans[i][j] = 0;
			for(k=0;k<size;k++)//col
			{
				ans[i][j] = ans[i][j] + (a[i][k]*b[k][j]);
			}
		}
	}
	cout<<"\nArray a = \n";
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
	cout<<"\nArray b = \n";
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			cout<<b[i][j]<<" ";
		}
		cout<<"\n";
	}
	cout<<"\nArray ans = \n";
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			cout<<ans[i][j]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
