#include<iostream>
using namespace std;
int main()
{
	int i,j,sp=10,n1=1;
	for(i=4;i>=1;i--)
	{
		for(j=0;j<=sp+1;j++)
			cout<<" ";
		for(j=3;j>=i;j--)
		{
			cout<<" "<<n1++;
		} 
		sp--;
		cout<<"\n";
	}
	int n2=3;
	for(i=1;i<=2;i++)
	{
		for(j=0;j<=sp+3;j++)
			cout<<" ";
		for(j=2;j>=i;j--)
		{
			cout<<" "<<n2--;
		}
		sp++;
		cout<<"\n";
	}

	

}