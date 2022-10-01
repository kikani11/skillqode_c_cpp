#include<iostream>
using namespace std;
int main()
{
	int a[5]={23,43,54,51,76};
	int i,*ptr=NULL;
	ptr=a;
	cout<<"\n addres \t value\n ";
	cout<<"~~~~~~~~~~~~~~~~~~~~~~";
	for(i=0;i<5;i++)
	{
		//cout<<"\n  \t "<<&a[i],a[i];
		cout<<"\n  \t "<<(ptr+i),*(ptr+i);
	}
	//cout<<"\n \t"<<(ptr+2),*(ptr+2);
}