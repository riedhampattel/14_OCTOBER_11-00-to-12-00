#include<iostream>
using namespace std;
int main()
{
	string food = "pizza";
	string &item = food;
	item = "Pasta";
	cout<<"\nValue of food = "<<food;
	cout<<"\nAddress of food = "<<&food<<endl;
	cout<<"\nValue of item = "<<item;
	cout<<"\nAddress of food = "<<&item;
	return 0;
}
