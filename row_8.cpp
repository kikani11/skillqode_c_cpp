#include<iostream>
using namespace std;
int main()
{
	int h,k;
	char n=65;
	for(h=1;h<=5;h++) 
	{
		for(k=1;k<=5;k=k+1)
		{
			cout<<"\t"<<n++;
		}
		cout<<"\n";

	}
}