#include<iostream>
using namespace std;
int dosum(int a,int b)
{
    return(a+b);
}
int main()
{
    int a,b;
    cout<<"\n entre two value :";
    cin>>a>>b;

    cout<<"\n sum : "<<dosum(a,b);
}