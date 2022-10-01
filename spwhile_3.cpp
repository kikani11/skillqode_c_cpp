#include<iostream>
using namespace std;
int main()
{
	int ir=5,j,sp=10;
	while(ir>=1)
	{
		j=5;
		while(j<=sp)
		{
			cout<<" ";
			j++;
		}
		j=5;
		while(j>=ir)
		{
			cout<<" "<<ir;
			j--;
		}
		ir--;
		sp--;
		cout<<"\n";
	}
	int it=2;
	while(it<=5)
	{
		j=4;
		while(j<=sp+1)
		{
			cout<<" ";
			j++;
		}
		j=5;
		while(j>=it)
		{
			cout<<" "<<it;
			j--;
		}
		it++;
		sp++;
		cout<<"\n";
	}

	return 0;

}