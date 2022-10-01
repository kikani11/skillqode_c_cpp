#include<iostream>
using namespace std;
void dosum(int x,int y)
{
    cout<<"\n x : \t y :"<<x,y;
    cout<<"\n sum :"<<x,y;
}
int main()
{
    int a,b;
    cout<<"\n enter value a : ";
    cin>>a;
    cout<<"\n enter value b : ";
    cin>>b;
    dosum(a,b);
}