#include<iostream>
using namespace std;
int main()
{
	int ir=65,j,sp=10;
	char ch='A';
	do
	{
		j=5;
		do
		{
			cout<<" ";
			j++;
		}while(j<=sp);
		j=65;
		do
		{
			cout<<" "<<j;
			j++;
		}while(j<=ir);
		ir++;
		sp--;
		cout<<"\n";
	}while(ir<=69);
	int it=68;
	do
	{
		j=5;
		do
		{
			cout<<" ";
			j++;
		}while(j<=sp+3);
		j=65;
		do
		{
			cout<<" "<<j;
			j++;
		}while(j<=it);
		it--; 
		sp++;                     
		cout<<"\n";
	}while(it>=1);

	return 0;

}