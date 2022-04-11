#include<iostream>
#include<string>

using namespace std;

class person{

    friend class date;
    private:
    string n;
    int id;
    int ID[10];
    static int count;
    
    public:

    person()
    {
        for(int i=0;i<4;i++)
        {
            ID[i]=0;
        }

        id=0;
    }
    

  friend istream & operator >>(istream &a, person &c)
    {
      a>>c.n>>c.id;
      count++;
      return a;
    }

  friend ostream & operator <<(ostream &a, person &c)
    {
      a<<c.n;
      return a;
    }  

    ~person()
    {

    }


};

int person::count=0;

class date{

    private:
    int day,month,year;

    public:
    date()
    {
        day=0;
        month=0;
        year=0;
    }

    friend istream& operator >>(istream &a,date &c)
    {   
        cout<<"Enter year: ";
        a>>c.year;
        while(c.year<0)
        {
            cout<<"INVALID YEAR!!! ENTER YEAR THAT IS POSITIVE: ";
            a>>c.year;
        }

        cout<<"Enter month: ";
        a>>c.month;
        while(c.month>12 && c.month<0)
        {
            cout<<"INVALID MONTH!!! ENTER MONTH LESS THEN OR EQUAL TO 12 BUT NOT NEGATIVE: ";
            a>>c.month;
        }

        cout<<"Enter day: ";
        a>>c.day;
        while(c.day>31 && c.day<0)
        {
            cout<<"INVALID DAY!!! ENTER DAY LESS THEN OR EQUAL TO 31 BUT NOT NEGATIVE: ";
            a>>c.day;
        }


        return a;
    }
    
    friend ostream & operator <<(ostream &a, date &c)
    {
        a<<c.day<<"-"<<c.month<<"-"<<c.year;
        return a;
    }

    bool operator < (date &c)
    {
        if(c.year<year || c.month<month || c.day<day)
        return true;

        else 
        return false;
    }

    bool operator > (date &c)
    {
        if(c.year>year || c.month>month || c.day>day)
        return true;

        else 
        return false;
    }

};

int main()
{
    person s1,s2;
    date d1,d2;

        cout<<"Person 1. Data :"<<endl;
        cout<<"Enter Name and ID: ";
        cin>>s1;
        cout<<"Enter joining date(yyyy mm dd): ";
        cin>>d1;

        cout<<"Person 2. Data: "<<endl;
        cout<<"Enter Name and ID: ";
        cin>>s2;
        cout<<"Enter joining date(yyyy mm dd): ";
        cin>>d2;

        if(d1<d2)
        {
            cout<<s2<<" is senoir then "<<s1<<" as "<<d2<<" is less then "<<d1; 
        }

        else
        cout<<s1<<" is senoir then "<<s2<<" as "<<d1<<" is less then "<<d2;
    
    return 0;

}