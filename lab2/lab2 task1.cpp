#include<iostream>
#include<iomanip>

using namespace std;

#define input(x) int x; cin>>x;
#define check(x) int a=x&x-1;

int main()
{
	cout<<"Enter a number to check if it is a power of 2 or not: ";
	input(x);
	
	check(x);
	
	if(a)
	{
		cout<<"Number entered is not power of 2"<<endl;
	}
	else
	{
		cout<<"Number entered is power of 2"<<endl;
	}
	
	
	return 0;
}
