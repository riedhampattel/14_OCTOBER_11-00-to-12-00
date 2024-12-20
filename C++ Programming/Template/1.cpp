#include<iostream>
using namespace std;
template <typename T>
void swapping(T &n1,T &n2)
{
    T temp;
    temp = n1;
    n1 = n2;
    n2 = temp;
}
int main()
{
    int a=10,b=20;
    cout<<"\nValue of a before swapping = "<<a;
    cout<<"\nValue of b before swapping = "<<b;
    swapping(a,b);
    cout<<"\nValue of a after swapping = "<<a;
    cout<<"\nValue of b after swapping = "<<b;

    float x=10.32,y=56.23;
    cout<<"\nValue of x before swapping = "<<x;
    cout<<"\nValue of y before swapping = "<<y;
    swapping(x,y);
    cout<<"\nValue of x after swapping = "<<x;
    cout<<"\nValue of y after swapping = "<<y;

    char p='A',q='B';
    cout<<"\nValue of p before swapping = "<<p;
    cout<<"\nValue of q before swapping = "<<q;
    swapping(p,q);
    cout<<"\nValue of p after swapping = "<<p;
    cout<<"\nValue of q after swapping = "<<q;
    return 0;
}