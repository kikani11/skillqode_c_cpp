#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"\n enter a :";
    cin>>a;


    cout<<"\n enter b :";
    cin>>b;

    c=a*b;
    if(c%21==0)
    {
        cout<<"\n num devisible by 3 or 7:";
    }
    else
    {
        cout<<"\n num is not devisible by 3 or 7:";
    }
}