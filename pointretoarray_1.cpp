#include<iostream>
using namespace std;
int *getarray(int *a)
{
	int i;
	cout<<"\n address\t value \n";
	cout<<"~~~~~~~~~~    ~~~~~~~~~";
	
	for(i=0;i<5;i++)
	{

		cout<<"\n  "<<&a[i],a[i];
	}
	return a;

}
int main()
{
	int *n;
	int a[5]={23,43,54,51,76};
	n=getarray(a);

}