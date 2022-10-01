#include<iostream>
using namespace std;
int main()
{
	int ir=1,j,sp=10;
	char a=65;
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
			cout<<" "<<a++;
			j=j+1;
		}
		ir++;
		sp--;
		cout<<"\n";
	}
	int it=5;
	char n=79;
	while(it>=1)
	{
		j=1;
		while(j<=sp+2)
		{
			cout<<" ";
			j++;
		}
		j=1;
		while(j<=it)
		{
			cout<<" "<<n--;
			j=j+1;
		}
		it--;
		sp++;
		cout<<"\n";
	}

	return 0;

}