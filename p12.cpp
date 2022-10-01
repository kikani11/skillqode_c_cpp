#include<iostream>
using namespace std;
int main()
{
	char n=4,i,j;
	for(i=0;i<=n;i++)
	{
		for(j=i;j>=0;j--)
		{
			cout<<"\t"<<j+65;
		}
		cout<<"\n";
	}
	

}