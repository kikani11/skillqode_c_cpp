#include<iostream>
using namespace std;
int main()
{
	int i,j;
	char n=65;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<"\t"<<n++;
		}
		cout<<"\n";
	}


}