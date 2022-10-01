#include<iostream>
using namespace std;
int main()
{
	int i,j,k;
	for(i=0;i<5;i++)
	{
		for(k=3;k>=i;k--)
			cout<<" ";
		for(j=0;j<=i;j++)
		{
			cout<<" "<<j+65;
		}
		
		cout<<"\n";
	}
	for(i=3;i>=0;i--)
	{
		for(k=3;k>=i;k--)
			cout<<" ";
		for(j=1;j>=0;j--)
		{
			cout<<" "<<(i-j)+65;
		}
		                         
		cout<<"\n";
	}

	return 0;

}