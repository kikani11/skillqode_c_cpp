#include<iostream>
using namespace std;
int main()
{
	int ir=1,j,sp=10,a=1;
	while(ir<=5)
	{
		j=0;
		while(j<=sp+1)
		{
			cout<<" ";
			j++;
		}
		j=1;
		while(j<=ir)
		{
			if(a%2==1)
			{
				cout<<" 1";
				a++;
				j++;
			}
			else
			{
				cout<<" 0";
				a++;
				j++;
			}
		}
		ir++;
		sp--;
		cout<<"\n";
	}
	int it=4;
	while(it>=1)
	{
		j=0;
		while(j<=sp+3)
		{
			cout<<" ";
			j++;
		}
		j=1;
		while(j<=it)
		{	
			if(a%2==1)
			{
				cout<<" 1" ;
				a++;
				j++;
			}
			else
			{
				cout<<" 0";
				a++;
				j++;
			}
		}
		it--;
		sp++;
		cout<<"\n";
	}

	return 0;

}