#include<iostream>
using namespace std;
template <typename T,int size>
void soring(T arr[],int size)
{
    int i,j;
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(arr[i]>arr[j])
            {
                T temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
int main()
{
    int a[5]={1,25,2,45,12},i;
    cout<<"\nBefore sorting := ";
    for(i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }
    sorting(a,5);
    cout<<"\nAfter sorting := ";
    for(i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }
}