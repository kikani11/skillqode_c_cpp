#include<iostream>
using namespace std;
int main()
{
    int a=10,*b;
    cout<<"\n value a : "<<a;
    cout<<"\n adders a : "<<a;

    b=&a;
    cout<<"\n value b/ adders of a :";
    cout<<"\n adders"<<&b;

    cout<<"\n value of a using b :"<<*b;
}