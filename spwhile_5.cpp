#include<iostream>
using namespace std;
int main()
{
	int ir=1,j,sp=10,a=65;
	while(ir<=4)
	{
		j=1;
		while(j<=sp+2)
		{
			cout<<" ";
			j++;
		}
		j=1;
		while(j<=ir)
		{
			if(ir%2==0)
			cout<<" "<<a+32;
			else
			cout<<" "<<a;
			a++;
			j++;
		}
		ir++;
		sp--;
		cout<<"\n";
	}
	int O=79;
	int it=5;
	while(it>=1)
	{
		j=0;
		while(j<=sp+1)
		{
			cout<<" ";
			j++;
		}
		j=1;
		while(j<=it)
		{
			if(it%2==0)
			cout<<" "<<O+32;
			else
			cout<<" "<<O;
			O--;
			j++;
		}
		it--;
		sp++;
		cout<<"\n";
	}

	return 0;

}