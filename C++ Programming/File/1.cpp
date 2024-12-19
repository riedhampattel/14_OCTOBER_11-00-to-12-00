#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream MyFile("first.txt");
	MyFile<<"This is my first file";
	MyFile<<"\nThis is my second file";
	MyFile<<"\nThis is my third file";
	MyFile<<"\nThis is my fourth file";
	MyFile.close();
	cout<<"\nOperation successfull";
	return 0;
}
