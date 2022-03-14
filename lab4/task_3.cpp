// task 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<iostream>

using namespace std;

class small_set {

private:
    int size;
    int* a = new int[size];

public:

    small_set()
    {
        size = 0;
    }

    void set()
    {
        int b = size + 1;
        int* a1 = new int[b];

        for (int i = 0; i < size; i++)
        {
            a1[i] = a[i];
        }
        cout << "Enter a number to add: ";
        cin >> a1[size];

        while (a1[size] > 31)
        {
            cout << "Enter an integer less then or equal to 31 or greater then or equal to 0: ";
            cin >> a1[size];
        }
        while (a1[size] < 0)
        {
            cout << "Enter an integer less then or equal to 31 or greater then or equal to 0: ";
            cin >> a1[size];
        }
        while (cin.fail())
        {
            cin.clear();
            cin.ignore();
            cout << "INVALID INPUT!!!\n";
            cout << "Enter a number again: ";
            cin >> a1[size];
        }
        size++;
        delete[] a;

        a = a1;


    }

    void clear(int item)
    {
        int b = size - 1;
        int* a1 = new int[b];
        int c=0;

        for (int i = 0; i < size; i++)
        {
            
            if (a[i] == item)
            {
                c = i;
                cout<<c<<endl;
                break;
            }

            a1[i] = a[i];

        }

        for (int j = c + 1; j < size; j++)
        {
            cout<<j<<endl;
            a1[j-1] = a[j];
        }
        delete[] a;
        size--;

        a = a1;
    }

    void test(int item)
    {
        bool flag = 0;
        for (int i = 0; i < size; i++)
        {
            if (a[i] == item)
                flag = 1;
        }

        if (flag)
            cout << "number is present \n";

        else
            cout << "Number is not present \n";
    }

    void print()
    {
        cout << "{";
        for (int i = 0; i < size; i++)
            cout << a[i] << " ";
        cout << "}";
    }

};

int main()
{
    small_set num;

    bool y = 1;
    while (y)
    {//while loop

        int n;
        cout << "Enter the following number for the designated command: \n";
        cout << "1. add a number \n";
        cout << "2. Delete a number \n";
        cout << "3. Check if a number is present \n";
        cout << "4. Print the numbers \n";
        cout << "5. Exit \n";
        cout << "Enter a number: ";
        cin >> n;
        while (n != 1 && n != 2 && n != 3 && n != 4)
        {
            cin.clear();
            cin.ignore('\n');
            cout << "Invalid command \n";
            cout << "Enter number again: ";
            cin >> n;
        }
        while (cin.fail())
        {
            cin.clear();
            cin.ignore('\n');
            cout << "Invalid command \n";
            cout << "Enter number again: ";
            cin >> n;

        }

        switch (n)
        {

        case 1:
        {
            num.set();
            break;
        }

        case 2:
        {
            int item;
            cout << "Enter a number to remove: ";
            cin >> item;
            num.clear(item);
            break;
        }

        case 3:
        {
            int c=0;
            cout << "Enter a number to check if it is present: ";
            cin >> n;
            num.test(c);
            break;
        }

        case 4:
        {
            num.print();
            break;
        }

        }

        if (n == 5)
            y = 0;

    }//while loop
    cout << "GOODBYE!";

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
