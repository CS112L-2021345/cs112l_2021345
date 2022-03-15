#include<iostream>

using namespace std;

class parity{

private:

int size;
int *a = new int[size];

public:
parity()
{
    size=1;
}

void put(int num)
{
    int b=size+1;
    int *a1=new int[b];

    for(int i=0;i<size;i++)
    {
        a1[i]=a[i];
    } 
    a1[size]=num;
    size++;    

    delete[] a;
    a=a1;
}

void del()
{
    if(size<0)
    {
        cout<<"You cannot delete more elements!";
        return;
    }

    int b=size-1;

    int *a1=new int[b];

    for(int i=0;i<b;i++)
    a1[i]=a[i];

    size--;

delete[] a;

    a=a1;
}

void print()
{
cout<<"{ ";
for(int i=0;i<size;i++)
cout<<a[i]<<" ";

cout<<" }";
}

bool test()
{
if(size%2==0)
return 1;

else 
return 0;
}

~parity()
{
    delete[] a;
}

};

int main()
{
    parity p;
    int num;


    while(1)
    {
        cout<<"Enter a number to perform the designated function\n";
        cout<<"Enter 1 to Add a number\n";
        cout<<"Enter 2 to delete a number\n";
        cout<<"Enter 3 to print numbers\n";
        cout<<"Enter 4 to do size test\n";
        cout<<"Enter 5 to Exit\n";
        cout<<"Enter a number: ";
        cin>>num;
        while (num!=1 && num!=2 && num!=3 && num!=4 && num!=5)
        {
            cout<<"Invalid command!!\n";
            cout<<"Enter valid command: ";
            cin>>num;
        }
        while(cin.fail())
        {
            cin.clear();
            cin.ignore('\n');
            cout<<"Invalid command!!!\n ";
            cout<<"Enter command: ";
            cin>>num;
        }

        if(num==1)
        {
            int n;
            cout<<"Enter a number to add: ";
            cin>>n;
            p.put(n);
        }
        if(num==2)
        {
            p.del();
            cout<<endl;
        }
        if(num==3)
        {
            p.print();
            cout<<endl;
        }
        if(num==4)
        {
            bool b;
            b=p.test();
            if(b)
            cout<<"Number of puts is an even number\n";

            else 
            cout<<"Number of puts is an odd number\n";
        }
        if(num==5)
        break;

    }
cout<<"GOODBYE";

return 0;
}