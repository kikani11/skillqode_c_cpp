#include<iostream>
using namespace std;
int main()
{
    int a[5];
    int i;
    for(i=0;i<5;i++)
    {
        cout<<"\n enter a :"<<i;
        cin>>i;
    }
    cout<<"\n your array is \n \t";
    for(i=0;i<5;i++)
    {
        cout<<"\n a :"<<a[i];
    }
}