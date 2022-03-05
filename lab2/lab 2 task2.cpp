#include<iostream>
#include<bitset>

using namespace std;

#define input(x) int x; cin>>x;
#define process(y) int b=1; b=b<<y;
#define multiply(x,y) int num=x*y;

int main()
{
	cout << "Enter first number: ";
	input(x);
	cout << "enter second number: ";
	input(y);

	process(y);

	multiply(x, b);

	cout << "Answer is: " << num;

	return 0;
}
