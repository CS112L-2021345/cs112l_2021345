#include<iostream>

using namespace std;

class vehicle{

    protected:
    int no_of_tires;
    string size;
    int no_of_seats;

    public:
    vehicle()
    {
        no_of_seats=0;
        no_of_tires=0;
        size="";
    }

    virtual void set_value()
    {
        cout<<"Enter size/Type of vehicle: ";
        cin>>size;
        cout<<"Enter no of seats of vehicle: ";
        cin>>no_of_seats;
        cout<<"Enter no of tires of vehicle: ";
        cin>>no_of_tires;
    }

    virtual int get_no_of_seats()
    {
        return no_of_seats;
    }

    virtual int get_no_of_tires()
    {
        return no_of_tires;
    }

    virtual string get_size()
    {
        return size;
    }

    virtual void print_value()
    {
        cout<<"Size: "<<size<<endl;
        cout<<"Number of seats: "<<no_of_seats<<endl;
        cout<<"Number of tires: "<<no_of_tires<<endl;
    }

    ~vehicle()
    {

    }
   
};

class car: public vehicle{

    protected:
    string colour;

    public:
    car()
    {
        colour="";
    }

    void set_value() override
    {
        cout<<"Enter size/Type of car: ";
        cin>>size;
        cout<<"Enter no of seats of car: ";
        cin>>no_of_seats;
        cout<<"Enter no of tires of car: ";
        cin>>no_of_tires;
        cout<<"Enter colour of car: ";
        cin>>colour;
    }

    void print_value() override
    {
        cout<<"Size: "<<size<<endl;
        cout<<"Number of seats: "<<no_of_seats<<endl;
        cout<<"Number of tires: "<<no_of_tires<<endl;
        cout<<"Colour: "<<colour<<endl;
    }

    ~car()
    {

    }

};

class vitz: public car{

    private:
    string model;
    string plate_no;

    public:
    vitz()
    {
        model="";
        plate_no="";
    }

    void set_value() override
    {
        cout<<"Enter size/Type of vitz: ";
        cin>>size;
        cout<<"Enter no of seats of vitz: ";
        cin>>no_of_seats;
        cout<<"Enter no of tires of vitz: ";
        cin>>no_of_tires;
        cout<<"Enter colour of vitz: ";
        cin>>colour;
        cout<<"Enter model of vitz: ";
        cin>>model;
        cout<<"Enter plate number of vitz: ";
        cin>>plate_no;
    }

    void print_value() override
    {
        cout<<"Size: "<<size<<endl;
        cout<<"Number of seats: "<<no_of_seats<<endl;
        cout<<"Number of tires: "<<no_of_tires<<endl;
        cout<<"Colour: "<<colour<<endl;
        cout<<"Model: "<<model<<endl;
        cout<<"Plate Number: "<<plate_no<<endl;
    }

    ~vitz()
    {

    }
};

int main()
{
    car c;
    vehicle *a=&c;

        a->set_value();
    int n=a->get_no_of_seats();
    int n2=a->get_no_of_tires();//vechicle to car working
    string s=a->get_size();

    cout<<"Seats: "<<n<<endl;
    cout<<"Tires: "<<n2<<endl;
    cout<<"Size: "<<s<<endl;

    vitz v;
    vehicle *b=&v;

    b->set_value();
    b->print_value();//vehicle to vitz working

    vitz d;
    car *g=&d;

    g->set_value();
    g->print_value();//car to vitz working

    return 0;
}