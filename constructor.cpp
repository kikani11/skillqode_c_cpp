#include<iostream>
using namespace std;
class sum
{
    public:
    sum(int,int);
    sum(int,int,int);
    sum(double,double);
    sum(double,double,double);
};
sum::sum(int a,int b)
{
    cout<<"\n two para int a+b : "<<a+b<<endl;
}
sum::sum(int a,int b,int c)
{
    cout<<"\n three para int a+b+c  : "<<a+b+c<<endl;
}
sum::sum(double a,double b)
{
    cout<<"\n two para double a+b : "<<a+b<<endl;
}
sum::sum(double a,double b,double c)
{
    cout<<"\n two para double a+b+c : "<<a+b+c<<endl;
}
int main()
{
    sum ob1(10.1,20.1,30.0),ob2(10.5,20.5),ob3(10,20,30),ob4(10.1,20.1,30.1);
}