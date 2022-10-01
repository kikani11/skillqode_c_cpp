#include<iostream>
using namespace std;
int main()
{
    int a=10,*p,**p2;
    p=&a;
    p2=&p;
    cout<<"\n value of a : "<<a;
    cout<<"\n adders of a : "<<&a;

    cout<<"\n value a using p : "<<*p;
    cout<<"\n adders a using p : "<<p;
    cout<<"\n adders of p : "<<&p;
}