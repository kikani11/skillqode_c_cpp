#include<iostream>
using namespace std;
int myfunction()
{
    cout<<"\n \t inside myfunction :";
}
int main()
{
    cout<<"\n brfore main :";
    myfunction();
    cout<<"\n after main :";
}