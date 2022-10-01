#include<iostream>
using namespace std;
int main()
{
	int i=2,j;
	while(i<=10)
	{
		j=1;
		while(j<=4)
		{
			cout<<"\t"<<i,j;
			j++;
		}
	cout<<"\n"<<i,j;
	i=i+2;
	}
	return 0;

}