// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include<iostream>
#include<string>

#define read(x) string x; cout<<"Enter a base: "; cin>>x;
#define check(x) while( x!="2" && x!="8" && x!="10" && x!="16" ){ cout<<"INALID COMMAND! Please enter correct base(2,8,10,16): ";cin>>x;  }
#define enter(y,z) string y,z;cout<<"Enter 1st number in base "<<x<<": ";cin>>y; cout<<"Enter 2nd number in base "<<x<<": ";cin>>z;

//binary case
#define check2(y,a) for(int i=0;i<a;i++){if(y[i]!='0' && y[i]!='1'){cout<<"INVALID NUMBER! "<<y<<" Please enter a valid number for base "<<x<<": ";cin>>y;i=0;} }

//octal case
#define check3(y,a) for(int i=0;i<a;i++){if(y[i]>'7'){cout<<"INVALID NUMBER! "<<y<<" Please enter a valid number for base "<<x<<": ";cin>>y;i=0;}}

//hexal case
//#define check4(y,a) for(int i=0;i<a;i++){ if(!isxdigit(y[i])){cout<<"INVALID NUMBER! "<<y<<" Please enter a valid number for base "<<x<<": ";cin>>y;}    } }
#define hextodec(y,a,hex) for (int i = 0; y[i] != '\0'; i++){a--;if (y[i] >= '0' && y[i] <= '9') r = y[i] - 48; else if (y[i] >= 'a' && y[i] <= 'f') r = y[i] - 87; else if (y[i] >= 'A' && y[i] <= 'F') r = y[i] - 55; hex += r * pow(16, a); }

//decimal case
#define enternum(y,z) int y,z; cout<<"Enter two numbers(They will be in decimal form): "<<endl;cout<<"Enter 1st number: ";cin>>y;cout<<"Enter 2nd number: ";cin>>z; 

using namespace std;


void decToHexa(int n)
{
	char hexaDeciNum[100];

	int i = 0;
	while (n != 0) {
		int temp = 0;

		temp = n % 16;

		if (temp < 10) {
			hexaDeciNum[i] = temp + 48;
			i++;
		}
		else {
			hexaDeciNum[i] = temp + 55;
			i++;
		}

		n = n / 16;
	}
	cout << "After adding Result is: " << endl;
	for (int j = i - 1; j >= 0; j--)
		cout << hexaDeciNum[j];
}

int main()
{
	read(x);
	check(x);

	if (x == "2")
	{
		enter(y, z);

		int a = y.length();
		int b = z.length();

		check2(y, a);
		check2(z, b);

		int c = a - 1;
		int d = b - 1;

			string result = "";
			int temp = 0;
			while (c >= 0 || d >= 0 || temp == 1)
			{
				temp += ((c >= 0) ? y[c] - '0' : 0);
				temp += ((d >= 0) ? z[d] - '0' : 0);
				result = char(temp % 2 + '0') + result;
				temp /= 2;
				c--; d--;
			}
			cout << "The Result after adding: " << result;

	}
	else if (x == "8")
	{
		enter(y, z);

		int a = y.length();
		int b = z.length();

		check3(y, a);
		check3(z, b);

		int i = a - 1;
		int j = b - 1;
		int temp = 0;
		int carry = 0;
		string result = "";
		while (i >= 0 || j >= 0)
		{
			if (i >= 0 && j >= 0)
			{
				temp = (y[i]-'0') + (z[j]-'0') + carry;
				i--;
				j--;
			}
			else if (i >= 0)
			{ 
				temp =(y[a]-'0') + carry;
				i--;
			}
			else
			{ 
				temp = (z[b]-'0') + carry;
				j--;
			}
			result = to_string((temp % 8)) + result;
			carry = temp / 8;
		}
		if (carry != 0)
		{
			result = to_string(carry) + result;
		}
		
		cout << "Result after adding : " << result << endl;
	}
	else if (x == "16")
	{
		cout << "Enter capital letters only for HEXAL NUMBERS: " << endl;
		enter(y, z);

		

		int a = y.length();
		int b = z.length();

		bool flag=0;

		while (1)
		{
			for (int i = 0; i < a; i++)
			{

				if (!isxdigit(y[i]))
				{
					flag = 1;
					break;
				}

			}

			if (flag)
			{
				cout << "INVALID NUMBER! " << y << "  Please enter correct number in base " << x << ": ";
				cin >> y;
				flag = 0;
			}
			else
				break;


		}

		//check4(y, a);
		//check4(z, b);

		int r=0,r1=0, hex = 0, hex1 = 0;

		hextodec(y, a, hex);
		hextodec(z, b,hex1);

		int sum = hex1 + hex;

		decToHexa(sum);

	}
	else if (x == "10")
	{
		enternum(y, z);

		cout << "Sum of numbers is: " << y + z;

	}

	return 0;

}





// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
