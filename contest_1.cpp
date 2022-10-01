#include<iostream> 
using namespace std; 
class Bank 
{ 
    int accBalance,withdrawal,Deposite; 
    public: 
    Bank(); //function declaration
    Bank(int); //function declaration
    void showAccountBalance(); //function declaration
};
//function defination
Bank::BBank()
    { 
        cout<<"\n Withdrawal :"; 
        cin>>withdrawal; 
 
    } 
    //function defination
    Bank::bank(int initbal) 
    { 
        accBalance=1000; 
        cout<<"\n Default Constructor Called..."; 
        cout<<"\n Withdrawal :"; 
        cin>>withdrawal; 
 
    } 
    //function defination
    Bank::bank() 
    { 
        accBalance=initBal; 
    } 
    //function defination
    void Withdrawal() 
    { 
        cout<<"\n Withdrawal :"<<withdrawal; 
        Deposite=accBalance-withdrawal; 
        cout<<"\n Deposite :"<<Deposite; 
         
    } 
    void Bank::showAccountBalance() //:: scope resolution operator 
    { 
        cout<<"\n AccountBalance :"<<accBalance; 
    }  
int main() 
{ 
    Bank Person1(10000); 
    Person1.showAccountBalance(); //function  call  
    Person1.getVal();             //function  call
    Person1.Withdrawal();         //function  call
   // Person1.showAccountBalance(); 
  // Person2.showAccountBalance(); 
  //  Person3.showAccountBalance(); 
}