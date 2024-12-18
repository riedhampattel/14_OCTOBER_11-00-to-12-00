#include<iostream>
using namespace std;
inline int cube(int num) {return num*num*num;}
int main()
{
	int ans;
	ans = cube(5);
	cout<<"\nCube is = "<<ans;
	return 0;
}
