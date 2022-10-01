#include<iostream> 
using namespace std; 
class employee 
{ 
    int hours,x,days=22,salary; 
    string employee; 
    public: 
    void infoemployee() 
    { 
        cout<<" employee Name :"; 
        cin>>employee; 
        cout<<"\n employee Salary :"; 
        cin>>x; 
        cout<<"\n employee Working Hours :"; 
        cin>>hours; 
    } 
    void showInfo() 
    { 
        cout<<"\n\n\n\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"; 
        cout<<"\nemployee Name :"<<employee; 
    } 
    void showSum() 
    { 
         
        if(hours>8) 
        { 
            salary=x*hours*days; 
            cout<<"\n Salary        :"<<salary; 
            salary=x*hours*days*2; 
            cout<<"\n Salary+Bounus :"<<salary; 
        } 
        else 
        { 
            salary=x*hours*days; 
            cout<<"\n Salary        :"<<salary; 
        } 
        cout<<"\n------------------------------------------"; 
 
    } 
}; 
int main() 
{ 
    employee obj1; 
    obj1.infoemployee(); 
    obj1.showInfo(); 
    obj1.showSum(); 
}