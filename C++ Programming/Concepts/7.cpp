#include<iostream>
using namespace std;
void display()
{
	static int i = 0;
	int j = 0;
	i++;
	j++;
	cout<<"\n"<<i;
	cout<<"\n"<<j<<endl;
}
int main()
{
	display();
	display();
	display();
	return 0;
}
