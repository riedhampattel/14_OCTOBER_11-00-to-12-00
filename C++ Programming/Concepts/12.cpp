#include<iostream>
using namespace std;
int a = 20;
int main()
{
	int a = 10;
	cout<<"\nValue of local a = "<<a;
	cout<<"\nValue of global a = "<<::a;
	return 0;
}
