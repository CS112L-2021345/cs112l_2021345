#include<iostream>
#include<cmath>

using namespace std;

class security{

int ID;
string name,rank;
static int off;
public:

void setter()
{
    cout<<"Enter ID of Officer: ";
    cin>>ID;
    cout<<"Enter name of officer: ";
    cin.ignore();
    getline(cin,name);
    cout<<"Enter rank of officer: ";
    getline(cin,rank);

    compare();
}

void compare()
{
     int n,temp=0,digit;
     n=ID;
while(n!=0)
{
digit =n%10;
temp=(temp*10)+digit;
n=n/10;
}

if(temp==ID)
{
cout<<"ACCESS TO NOT GRANTED TO OFFICER!";
}
else
{
cout<<"ACCESS GRANTED TO OFFICER";
off++;
}



}

void print()
{
cout<<"Number of officers who currently have access are: "<<off;
}

};

int security::off=0;

int main()
{
security s;
int a;

while(1)
{

    
cout<<"Enter a number to perform the desinated command: "<<endl;
cout<<"1. Enter ID of officer"<<endl;
cout<<"2. Get total number of officers"<<endl;
cout<<"3. Exit"<<endl;
cout<<"Enter a command: ";
cin>>a;

while(a!=1 && a!=2 && a!=3)
{
    cout<<"INVALID COMMAD ENTER AGAIN: ";
    cin>>a;
}
while(cin.fail())
{
    cout<<"INVALID COMMAD ENTER A NUMBER AGAIN: ";
    cin>>a;
}

if(a==1)
{
    s.setter();
    cout<<endl;
}

if(a==2)
{
    s.print();
    cout<<endl;
}

if(a==3)
break;

}

cout<<"GOODBYE";
return 0;

}