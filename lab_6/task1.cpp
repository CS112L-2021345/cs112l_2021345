#include<iostream>
#include<string>

using namespace std;


class person;
class coordinator;

class person{

    friend class coordinator;
    string name;



};

class coordinator{
    static int room;
    person p1,p2;

    public:
    void setter()
    {
        cout<<"Enter name of compitition and university: ";
        getline(cin,p1.name);
        cout<<"Enter name of compitition and university: ";
        getline(cin,p2.name);

        compare();
    }

    void compare()
    {
        char *a=&p1.name[0];
        char *b=&p2.name[0];
        int i=0,j=0;


        while(*a!=' ')
        {
            a++;
            i++;
        }
        *a='\0';a++;

        while(*b!=' ')
        {
            b++;
            j++;
        }
        *b='\0';b++;

        if(i>j)
        room=i;

        else
        room=j;

        if(*a==*b)
        {
            cout<<"Message from the coordinator Person 1 and Person 2 are roomates in room: "<<room;
            room++;
        }
        else
        cout<<"Message from the coordinator Person 1 and Person 2 are not roomates";
    }

};

int coordinator::room;

int main()
{
    coordinator c;
    c.setter();
    return 0;

}