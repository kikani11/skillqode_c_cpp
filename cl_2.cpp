#include<iostream>
using namespace std;
class arith
{
    int  a,b;
    public:
    void SetVal(int x,int y)
    {
        a=x;
        b=y;
    }
    void getval()
    {
        cout<<"\n a :"<<a<<"\t b :"<<b;
    }
    void dosum()
    {
        cout<<"\n a + b :"<<a+b;
        cout<<"\n a - b :"<<a-b;
        cout<<"\n a * b :"<<a*b;
        cout<<"\n a % b :"<<a%b;
        cout<<"\n a / b :"<<a/b;
    }
};
int main()
{
    arith obj1,obj2;
    obj1.SetVal(90,80);
    obj1.getval();
    obj1.dosum();
}