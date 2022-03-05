// lab 3 task 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	int s;
	cout << "Enter size of array: ";
	cin >> s;

	int* a = new int[s];

	cout << "enter elementsof array: " << endl;
	for (int i = 0; i < s; i++)
	{
		cout << "Enter element " << i << ": ";
		cin >> a[i];
	}

	for (int i = s - 1; i >= 0; i--)
	{
		if (a[i] < 0)
		{

			for (int j = i; j <s-1; j++)
			{
				if (a[j+1] >= 0)
					swap(a[j + 1], a[j]);
			}
		}	
	}

	cout << endl;
	for (int i = 0; i < s; i++)
		cout << a[i] << " ";

	delete[] a;

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
