/*
Write a c++ program to dislay this pattern

    *
   * *
  * * *
 * * * *
* * * * *
 * * * *
  * * *
   * *
    *
*/
#include<iostream>
using namespace std;
int main()
{
	int i,j,row=5,spc,star,k;
	spc = row-1;
	for(i=1;i<=row;i++)
	{
		for(j=spc;j>=1;j--)
		{
			cout<<" ";
		}
		for(k=1;k<=i;k++)
		{
			cout<<"* ";
		}
		cout<<"\n";
		spc--;
	}
	star = row - 1;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<" ";
		}
		for(k=star;k>=1;k--)
		{
			cout<<"* ";
		}
		cout<<"\n";
		star--;
	}
	return 0;
}
