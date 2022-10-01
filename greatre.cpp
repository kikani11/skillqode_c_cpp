#include<iostream>
using namespace std;
int main()
{
    int a=190,b=890,c=3000;
    if(a>b && a>c)
    {
        cout<<"\n a is greatre :"<<a;
    }
    else
    {
        if(b>c)
        {
            cout<<"\n b is greatre"<<b;
        }
        else
        {
            cout<<"\n c is greatre"<<c;
        }
    }
}