#include<iostream>
#include<string>
using namespace std;
void mystring(string newstr)
{
	cout<<"\n  str :";
}
int main()
{
	string str;
	cout<<"enter str :";
	cin>>str;
	
	cout<<"\n string :"<<str;
	getline(cin, str);
	mystring(str);
	return 0;
}