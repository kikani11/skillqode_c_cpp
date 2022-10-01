#include<iostream>
using namespace std;
int main()
{
    int a,b,x,y;
    cout<<"\n enter number a :";
    cin>>a;
    cout<<"\n enter numberba :";
    cin>>b;

    x=a*b;
    cout<<"\n a*b :"<<x;

    y=a+b;
    cout<<"\n a+b :"<<y;

    if(x%y==0)
    {
        cout<<"\n its divided : ";
    }
    else
    {
        cout<<"\n its not divided : ";
    }
}