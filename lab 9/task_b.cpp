#include<iostream>

using namespace std;

class My_father{

    protected:
    string name,eye_colour,hair_colour;

    public:
    My_father()
    {
        name="";
        eye_colour="";
        hair_colour="";
    }

    virtual void setter()
    {
        cout<<"Enter your name: ";
        cin.ignore();
        getline(cin,name);

        cout<<"Enter your eye color: ";
        cin>>eye_colour;

        cout<<"Enter your hair color: ";
        cin>>hair_colour;
    }

    virtual void getter()
    {
        cout<<"Your name is: "<<name<<endl;
        cout<<"your eye colour is: "<<eye_colour<<endl;
        cout<<"your hair colour is: "<<hair_colour<<endl;
    }

    ~My_father()
    {

    }


};

class My_mother{

    protected:
        string name,eye_colour,hair_colour;

    public:
    My_mother()
    {
        name="";
        eye_colour="";
        hair_colour="";
    }

    virtual void setter()
    {
        cout<<"Enter your name: ";
        cin.ignore();
        getline(cin,name);

        cout<<"Enter your eye color: ";
        cin>>eye_colour;

        cout<<"Enter your hair color: ";
        cin>>hair_colour;
    }

    virtual void getter()
    {
        cout<<"Your name is: "<<name<<endl;
        cout<<"your eye colour is: "<<eye_colour<<endl;
        cout<<"your hair colour is: "<<hair_colour<<endl;
    }

};

class Myself : public My_father{

    private:
    string name,eye_colour,hair_colour,education,age;

    public:
    Myself()
    {
        name="";
        eye_colour="";
        hair_colour="";
        education="";
        age="";  
    }

    void setter() override
    {
        cout<<"Enter your name: ";
        cin.ignore();
        getline(cin,name);

        cout<<"Enter your eye color: ";
        cin>>eye_colour;

        cout<<"Enter your hair color: ";
        cin>>hair_colour;

        cout<<"Enter your eduction: ";
        cin>>education;

        cout<<"Enter your age: ";
        cin>>age;
    }

    void getter() override
    {
        cout<<"Your name is: "<<name<<endl;
        cout<<"your eye colour is: "<<eye_colour<<endl;
        cout<<"your hair colour is: "<<hair_colour<<endl;
        cout<<"your education is: "<<education<<endl;
        cout<<"your age is: "<<age<<endl;
    }

    ~Myself()
    {

    }

};

class MySister : public My_father,public My_mother{

    private:
    string name,eye_colour,hair_colour,education,age;

    public:
    MySister()
    {
        name="";
        eye_colour="";
        hair_colour="";
        education="";
        age="";  
    }

        void setter() override
    {
        cout<<"Enter your name: ";
        cin.ignore();
        getline(cin,name);

        cout<<"Enter your eye color: ";
        cin>>eye_colour;

        cout<<"Enter your hair color: ";
        cin>>hair_colour;

        cout<<"Enter your eduction: ";
        cin>>education;

        cout<<"Enter your age: ";
        cin>>age;
    }

    void getter() override
    {
        cout<<"Your name is: "<<name<<endl;
        cout<<"your eye colour is: "<<eye_colour<<endl;
        cout<<"your hair colour is: "<<hair_colour<<endl;
        cout<<"your education is: "<<education<<endl;
        cout<<"your age is: "<<age<<endl;
    }

    ~MySister()
    {

    }

};

int main()
{
    /*Myself a;
    My_father *c=&a;

    c->setter();     //father to son working
    c->getter();*/

   /* MySister b;
    My_mother *d=&b;

    d->setter();    //mother to daughter working
    d->getter();*/

    /*MySister s;
    My_father *f=&s;
                    //father to daughter working
    f->setter();
    f->getter();*/
    
    return 0;
}