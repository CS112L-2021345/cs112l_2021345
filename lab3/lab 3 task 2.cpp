// lab 3 task 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{

    int s;
    cout << "Enter size of array: ";
    cin >> s;

    int* a = new int[s];

    cout << "Enter elements of array: " << endl;
    for (int i = 0; i < s; i++)
    {
        cout << "Enter " << i << " element : ";
        cin >> a[i];
    }

    int max = 0, min = 0;;
    for (int i = 0; i < s; i++)
    {
        if (a[i] > a[max])
            max = i;

        if (a[i] < a[min])
            min = i;
    }

    int max1 = 0, min1 = 0;
    for (int i = 0; i < s; i++)
    {
        if (a[i] > a[max] && a[i] < a[max])
            max1 = i;

        if (a[i]<a[min] && a[i]> a[min])
            min1 = i;

    }

    cout << endl;
    cout << "second largest number is: " << a[max1] << endl;
    cout << "Second smallest number is: " << a[min1] << endl;

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
