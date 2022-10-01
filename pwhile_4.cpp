#include<iostream>
using namespace std;
int main()
{
	int i=1,a=97,j;
	while(i<=5)
	{
		j=1;
		while(j<=i)
		{
			if(i%2==0)
			cout<<"\t"<<a-32;
			else
			cout<<"\t"<<a;
			a++;
			j++;
		}
	cout<<"\n";
	i++;
	}
}