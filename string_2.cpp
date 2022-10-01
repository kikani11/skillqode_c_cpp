#include<iostream>
#include<string>
using namespace std;
void mystring(str newstring)
{
	//char str[1];
	char str[10]="skillqode";
	cout<<"enter string :";
	cin>>str;
	//gets(str);

	mystring(str);

}