#include<iostream>
using namespace std;
class arith
{
    int  a,b;
    public:
    void SetVal(int x,int y)   //setter
    {
        cout<<"\n enter a : ";
        cin>>a;
        cout<<"\n enter b : ";
        cin>>b;
    }
    void getval()   //grtter
    {
        cout<<"\n a :"<<a<<"\t b :"<<b;
    }
    void dosum()
    {
        cout<<"\n a + b :"<<a+b;
    }
};
int main()
{
    arith obj1,obj2;
    obj1.SetVal();
    obj1.getval();
    obj1.dosum();
}