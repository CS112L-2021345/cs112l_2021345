#include<iostream>
#include<string>

using namespace std;

struct user
{
	string name;
	string city;
	int age;
	int day,month,year;
};

int main()
{
	int num;
	
	cout<<"Enter number of students: ";
	cin>>num;
	user *a=new user[num];
	
	for(int i=0;i<num;i++)
	{
		cout<<"Enter record of "<<i+1<<" user: "<<endl;
		cout<<"Enter name of student: ";
		cin.ignore();
		getline(cin,a[i].name);
		
		cout<<"Enter age of student: ";
		cin>>a[i].age;
		while(cin.fail())
		{
			cout<<"INVALID COMMAND!!"<<endl<<"Enter a number: ";
			cin.clear();
			cin.ignore();
			cin>>a[i].age;
		}
			
		cout<<"Enter residential city of student: ";
		cin.ignore();
		getline(cin,a[i].city);	
		
		
		cout<<"Enter date of birth of student: "<<endl;
		cout<<"Enter day: ";
		cin>>a[i].day;
		while(cin.fail())
		{
			cout<<"INVALID COMMAND!!"<<endl<<"Enter a number: ";
			cin.clear();
			cin.ignore();
			cin>>a[i].day;
		}
		cout<<"ENter month: ";
		cin>>a[i].month;
		while(cin.fail())
		{
			cout<<"INVALID COMMAND!!"<<endl<<"Enter a number: ";
			cin.clear();
			cin.ignore();
			cin>>a[i].month;
		}
		cout<<"enter year: ";
		cin>>a[i].year;
		while(cin.fail())
		{
			cout<<"INVALID COMMAND!!"<<endl<<"Enter a number: ";
			cin.clear();
			cin.ignore();
			cin>>a[i].year;
		}
		
		
	}
	
	int day,month,year;
	
	cout<<endl<<"Enter Date of birth of any student: "<<endl;
	cout<<"Enter day: ";
	cin>>day;
	while(cin.fail())
		{
			cout<<"INVALID COMMAND!!"<<endl<<"Enter a number: ";
			cin.clear();
			cin.ignore();
			cin>>day;
		}
	
	cout<<"Enter Month: ";
	cin>>month;
		while(cin.fail())
		{
			cout<<"INVALID COMMAND!!"<<endl<<"Enter a number: ";
			cin.clear();
			cin.ignore();
			cin>>month;
		}
		
	cout<<"Enter Year: ";
	cin>>year;
		while(cin.fail())
		{
			cout<<"INVALID COMMAND!!"<<endl<<"Enter a number: ";
			cin.clear();
			cin.ignore();
			cin>>year;
		}
		
	for(int i=0;i<num;i++)
	{
	if(a[i].day==day && a[i].month==month && a[i].year==year)
	{	
	cout<<"It is birthday of "<<a[i].name<<endl<<"HAPPY BIRTHDAY";
	break;
	}
	else if(i==num-1 && a[i].day!=day && a[i].month!=month && a[i].year!=year)
	cout<<"Just a regular day";	
		
	} 
		return 0;
		
		delete[] a;
		
}
