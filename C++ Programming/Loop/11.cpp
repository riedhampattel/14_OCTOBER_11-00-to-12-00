/*
   1
  1 1
 1 2 1
1 3 3 1  
*/
#include<iostream>
using namespace std;
int main()
{
	int row,spc,i,j,k,temp;
	cout<<"\nEnter the row number = ";
	cin>>row;
	spc = row-1;
	for(i=0;i<row;i++)
	{
		for(j=spc;j>=1;j--)
		{
			cout<<" ";
		}
		for(k=0;k<=i;k++)
		{
			if(i==0 || k==0)
			{
				temp = 1;
			}
			else
			{
				temp = temp*(i-k+1)/k;
			}
			cout<<temp<<" ";
		}
		cout<<"\n";
		spc--;
	}
	return 0;
}
