#include<iostream>

using namespace std;

class swap1{

private:
int a,b;

public:
void setter()
{
    cout<<"Enter 1st number: ";
    cin>>a;
    cout<<"Enter 2nd number: ";
    cin>>b;
}

void swap()
{
a=a+b;
b=a-b;
a=a-b;
}

void print()
{
    cout<<"The numbers after swaping are: "<<a<<" and "<<b;
}

};

int main()
{
    swap1 s;
    s.setter();
    s.swap();
    s.print();

    return 0;
}