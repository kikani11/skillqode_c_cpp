#include<iostream>
using namespace std;
int main()
{
    int a=10,b=20;

    cout<<"Enter a :";
    cin>>a;

    cout<<"Enter second number b :";
    cin>>b;

  cout<<"before swping";
  cout<<"\n a=%d b=%d"<<a,b;
  
  a=a+b;
  b=a-b;
  a=a-b;
  cout<<"\n value b : "<<b;
  cout<<"\n value b : "<<a;
  cout<<"\n a+b : "<<a+b;
  cout<<"\nAfter swspping";
  cout<<"\n a=%d b=%d"<<a,b;


    

}
 
