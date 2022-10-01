#include<iostream>
using namespace std;
int main()
{
    int a=100,b=127;
    cout<<"a :"<<(a<<1);
    cout<<"b :"<<(b<<1);

    cout<<"a :"<<(a>>1);
    cout<<"b :"<<(b>>1);

    a+=10;
    cout<<"\n a"<<a;

    a-=10;
    cout<<"\n a"<<a;

    a*=10;
    cout<<"\n a"<<a;
}