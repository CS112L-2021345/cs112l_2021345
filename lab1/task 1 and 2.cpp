// task 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>

using namespace std;

struct student
{
	string name;
	string regno;
	string degprog;
	float sgpa;
};

int main()
{
	int num,courses,count2=0,CH;
	float count1=0;
	cout << "Enter number of students enrolled: ";
	cin >> num;
	while(cin.fail())
	{
		cout << "INVALID COMMAND !!!" << endl << "Enter a number: ";
		cin >> num;
	}

	student* a =new student[num];

	for (int i = 0; i < num; i++)
	{
		cout << "Enter Purticulars of " << i+1 << " student: " << endl;
		cout << "Enter name: ";
		cin.ignore();
		getline(cin, a[i].name);
		cout << "Enter reg number: ";
		getline(cin, a[i].regno);
		cout << "Enter degree program: ";
		getline(cin, a[i].degprog);

		cout << "Enter number of courses registered: ";
		cin >> courses;

		int marks=0;
	    float GP=0;

		for (int i = 0; i < courses; i++)
		{
			cout << "Enter marks of "<<i+1<<" course: ";
			cin >>marks;
			cout << "Enter credit hours of " << i+1 << " course: ";
			cin >> CH;

			if (marks >= 90 && marks <= 100)
				GP = 4.0;
			else if (marks >= 80 && marks <= 90)
				GP = 3.67;
			else if (marks >= 70 && marks <= 80)
				GP = 3.33;
			else if (marks >= 60 && marks <= 70)
				GP = 3.0;
			else if (marks >= 50 && marks <= 60)
				GP = 2.67;
			else if (marks >= 40 && marks <= 50)
				GP = 2.33;
			else if (marks >= 30 && marks <= 40)
				GP = 2.0;
			else if (marks >= 20 && marks <= 30)
				GP = 1.67;
			else if (marks < 30)
				GP= 0;

			count1 = count1 + (GP*CH);
			count2 = count2 + CH;

		}

		a[i].sgpa = count1 / count2;

		count1 = 0;
		count2 = 0;
	}

	cout << endl << "Before sorting: " << endl;

	for (int i = 0; i < num; i++)
	{
		cout <<"Student name: " << a[i].name << endl;
		cout << "Student REG#: " << a[i].regno << endl;
		cout << "Degree program:  " << a[i].degprog << endl;
		cout << "SGPA: " << a[i].sgpa << endl << endl;

	}

	cout << endl << "After sorting: " << endl;

	for (int i = 0; i < num; i++)
	{
		cout << "Student name: " << a[i].name << endl;
		cout << "Student REG#: " << a[i].regno << endl;
		cout << "Degree program:  " << a[i].degprog << endl;
		cout << "SGPA: " << a[i].sgpa << endl << endl;

	}

	cout << endl;

	for (int i = 0; i < num; i++)
		for (int j = 0; j < num - i - 1; j++)
		{
			if (a[i].sgpa < a[i + 1].sgpa)
				swap(a[i], a[i + 1]);
		}
		
	cout << endl << "Highest GPA of "<<a[0].sgpa << " is scored by: " << a[0].name << " CONGRADULATIONS!!";

delete[] a;

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
