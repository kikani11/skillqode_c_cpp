#include<iostream>
using namespace std;
int main()
{
	int h,k;
	for(h=1;h<=9;h=h+2)
	{
		for(k=1;k<=4;k++)
		{
			cout<<"\t"<<h,k;
		}
		cout<<"\n"<<h,k;
	}
}