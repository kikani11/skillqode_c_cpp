#include<iostream>
using namespace std;
class tata
{
    string color;
    public:
    void own_color(string clr)
    {
        color=clr;
    }
    void get_color()
    {
        cout<<"\n yout tiago color is "<<color;
    }
    void tata_motor()
    {
        cout<<"\n welcome tata motor";
    }
};
int main()
{
    tata tiago;
    tiago.tata_motor();
    tiago.own_color("red");
    tiago.get_color();
}