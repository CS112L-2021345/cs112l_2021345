// lab3 task 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    int s;
    cout << "Enter size of array: ";
    cin >> s;

    int* a = new int[s];
    int* temp = new int[s - 1];
    cout << "Enter elements of array: " << endl;
    for (int i = 0; i < s; i++)
    {
        cout << "enter element "<<i<< " of array: ";
        cin >> a[i];
    }

    for (int i = 0; i < s-1; i++)
    {
        temp[i] = a[i] - a[i+1];
    }
    delete [] a;

    cout << endl;
    cout << "array after process is: " << endl;
    for (int i = 0; i < s-1; i++)
        cout << temp[i]<<" ";

    delete [] temp;
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
