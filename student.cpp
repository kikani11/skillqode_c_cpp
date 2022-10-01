#include<iostream>
using namespace std;
struct area
{
    int rollno;
    char name[10];
    int m1,m2,m3,total;
    float per;
};
int main()
{
    int i;
    int str;
    struct student str[5];
    cout<<"\n enter records of 2 student :";
    for(i=0;i<2;i++)
    {
        cout<<"\n enter rollno :";
        cin>>&st[i].rollno;
        cout<<"\n enter name :";
        cin>>&st[i].name;
        cout<<"\n enter m1 :";
        cin>>&st[i].m1;
        cout<<"\n enter m2 :";
        cin>>&st[i].m2;
        cout<<"\n enter m3 :";
        cin>>&st[i].m3;

        cout<<"\n student information list :";
        for(i=0;i<2;i++)
        {
            cout<<"\n rollno : \n name :"<<&st[i].rollno,st[i].name;
            cout<<"\n total : \n percentaeg : "<<&st[i].total,st[i].percentaeg;
        }
        return 0;
    }
}