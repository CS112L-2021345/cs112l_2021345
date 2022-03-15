#include<iostream>

using namespace std;

class heater
{
    private:
    int temp;

    public:
    heater()
    {
        temp=15;
    }

    void warmer()
    {
        temp+=5;
    }
    void cooler()
    {
        temp-=5;
    }

    void print()
    {
        cout<<"Tempreture: "<<temp;
    }
    ~heater()
    {

    }

};

int main()
{
heater h;    
int num;

cout<<"HEATER ON \n";
while(1)
{
cout<<"STANDARD TEMPERATURE: ";h.print();cout<<"\n";
cout<<"Enter 1 to increase tempreature \n";
cout<<"Enter 2 to decrease tempreature \n";
cout<<"Enter 3 to turn off heater\n";
cout<<"Enter command: ";
cin>>num;
while(num!=1 && num!=2 && num!=3)
{
    cout<<"INVALID COMMAND!!\n";
    cout<<"Please enter a number: ";
    cin>>num;
}
while(cin.fail())
{
cin.clear();
cin.ignore('\n');

cout<<"INVALID COMMAND!! \n";
cout<<"Enter again: ";
cin>>num;
}


if(num==1)
{
    h.warmer();
    h.print();
    cout<<endl;
}

if(num==2)
{
    h.cooler();
    h.print();
    cout<<endl;
}
if(num==3)
break;

}

cout<<"HEATER OFF";
return 0;
}