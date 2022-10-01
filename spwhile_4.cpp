#include<iostream>
using namespace std;
int main()
{
	int ir=6,j,sp=10;
	while(ir>=1)
	{
		j=6;
		while(j<=sp)
		{
			cout<<"d ";
			j++;
		}
		j=6;
		while(j>=ir)
		{
			cout<<" "<<j;
			j--;
		}
		ir--;
		sp--;
		cout<<"\n";
	}
	int it=2;
	while(it<=6)
	{
		j=4;
		while(j<=sp)	
		{
			cout<<" ";
			j++;
		}
		j=6;
		while(j>=it)
		{
			cout<<" "<<j;
			j--;
		}
		it++;
		sp++;
		cout<<"\n";
	}

	return 0;

}