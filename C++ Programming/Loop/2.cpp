//Write a C++ program to find the Armstrong number for a given range of number.
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int start,end,i,j,rem,sum,count,temp,power,num;
	cout<<"\nEnter the strarting value = ";
	cin>>start;
	cout<<"\nEnter the ending value = ";
	cin>>end;
	cout<<"\nArmstrong numbers := ";
	for(i=start;i<=end;i++)
	{
		num = i,count=0;
		temp = i,sum=0;
		while(num!=0)
		{
			num = num/10;
			count++;
		}
		for(j=1;j<=count;j++)
		{
			rem = temp%10;
			power = pow(rem,count);
			sum = sum + power;
			temp = temp/10; 
		}
		if(sum==i)
		{
			cout<<i<<" ";
		}
	}
	return 0;
}
