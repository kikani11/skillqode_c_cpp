#include<iostream>
using namespace std;
int main()
{
	int i,j,sp=10,a=97;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=sp+2;j++)
			cout<<" ";
		for(j=1;j<=i;j++)
		{
			if(j%2==0)
			cout<<" "<<a-32;
			else
			cout<<" "<<a;
			a++;
		}
		sp--;
		cout<<"\n";
	}
	int O=111;
	for(i=4;i>=1;i--)
	{
		for(j=0;j<=sp+1;j++)
			cout<<" ";
		for(j=1;j<=i;j++)
		{
			if(j%2==0)
			cout<<" "<<O-32;
			else
			cout<<" "<<O;
			O--;
		}
		sp++;
		cout<<"\n";
	}

	return 0;

}