#include<iostream>
#include<cmath>
#define pi 3.14159

using namespace std;

class shapes{

    protected:
    double length,width;

    public:
    shapes()
    {
        length=1;
        width=1;
    }

    virtual void area()
    {
        double area=length*width;
        cout<<"Area of shape is: "<<area<<endl;
    }

    virtual void setter()
    {
        cout<<"Enter length of shape: ";
        cin>>length;
        cout<<"Enter width of shape: ";
        cin>>width;
    }

    virtual void getter()
    {
        cout<<"Length of shape is: "<<length<<endl;
        cout<<"Width of shape is: "<<width<<endl;
        area();
    }

    ~shapes()
    {
        
    }

};

class two_D_shapes : public shapes {

    public:
    void setter() override
    {
        cout<<"Enter length of shape: ";
        cin>>length;
        cout<<"Enter width of shape: ";
        cin>>width;
    }

    void getter() override
    {
        cout<<"Length of shape is: "<<length<<endl;
        cout<<"Width of shape is: "<<width<<endl;
        area();
    }

    void area() override
    {
        double area=length*width;
        cout<<"Area of shape is: "<<area<<endl;          
    }

    ~two_D_shapes()
    {

    } 

};

class three_D_shapes: public shapes{

    protected:
    double height;

    public:
    three_D_shapes()
    {
        height=1;
    }

    void area() override
    {
        double area=length*width;
        cout<<"Area of shape is: "<<area<<endl;          
    }

    virtual void volume()
    {
        double volume=length*width*height;
        cout<<"Volume of shape is: "<<volume<<endl; 
    }

    void setter() override
    {
        cout<<"Enter length of shape: ";
        cin>>length;
        cout<<"Enter width of shape: ";
        cin>>width;
        cout<<"Enter height of shape: ";
        cin>>height;
    }

    void getter() override
    {
        cout<<"Length of shape is: "<<length<<endl;
        cout<<"Width of shape is: "<<width<<endl;
        area();
        volume();
    }

    ~three_D_shapes()
    {

    }

};

class circle : public two_D_shapes{

    protected:
    double radius;
    string colour;

    public:
    circle()
    {
        radius=1;
        colour="";
    }

    void area() override
    {
        double area=pi*pow(radius,2);
        cout<<"Area of circle is: "<<area<<endl;
    }

    void setter() override
    {
        cout<<"Enter radius of circle: ";
        cin>>radius;
        cout<<"Enter color of circle: ";
        cin>>colour;
    }

    void getter() override
    {
        cout<<"radius of circle is: "<<radius<<endl;
        cout<<"color of circle is: "<<colour<<endl;
        area();
    }

    ~circle()
    {

    }

};

class square : public two_D_shapes{

    protected:
    double side;
    string colour;

    public:
    square()
    {
        side=1;
        colour="";
    }

    void setter() override
    {
        cout<<"Enter length of side of square: ";
        cin>>side;
        cout<<"Enter colour of square: ";
        cin>>colour;
    }

    void getter() override
    {
        cout<<"length of side of square is: "<<side<<endl;
        cout<<"Colour of square is: "<<colour<<endl;
        area();
    }

    void area() override
    {
        double area=pow(side,2);
        cout<<"Area of square is: "<<area;
    }

    ~square()
    {

    }

};

class pyramid : public three_D_shapes{

    protected:
    double base,height;

    public:
    pyramid()
    {
        base=1;
        height=1;
    }

    void setter() override
    {
        cout<<"Enter base of pyramid: ";
        cin>>base;
        cout<<"Enter vertical height of pyramid: ";
        cin>>height;
    }

    void getter() override
    {
        cout<<"Base of pyramid is: "<<base<<endl;
        cout<<"height of pyramid is: "<<height<<endl;
        area();
        volume();
    }

    void area() override
    {
        double area;
        area=base*height;
        cout<<"Area of pyramid is: "<<area<<endl;
    }

    void volume() override
    {
        double vol;
        vol=(pow(base,2)*height)/3;
        cout<<"Volumne of pyramid is: "<<vol<<endl;
    }

    ~pyramid()
    {

    }
};

class cube : public three_D_shapes{

    private:
    double height,length,width;

    public:
    cube()
    {
        height=1;
        length=1;
        width=1;
    }

    void setter() override
    {
        cout<<"Enter height of cube: ";
        cin>>height;
        cout<<"Enter length of cube: ";
        cin>>length;
        cout<<"Enter width of cube: ";
        cin>>width;
    }

    void getter()
    {
        cout<<"Length of cube: "<<length<<endl;
        cout<<"Width of cube: "<<width<<endl;
        cout<<"Height of cube: "<<height<<endl;
        area();
        volume();
    }

    void area() override
    {
        double area;
        area=length*width;
        cout<<"area of cube is: "<<area<<endl;
    }

    void volume() override
    {
        double volume;
        volume=length*width*height;
        cout<<"Volume of cube is: "<<volume<<endl;
    }

    ~cube()
    {

    }

};

int main()
{
    /*pyramid p;
    three_D_shapes *c=&p;
                            //3d shapes to pyramid working
    c->setter();
    c->getter();*/

    /*cube c;
    three_D_shapes *a=&c;
                            //3d shapes to cube working
    a->setter();
    a->getter();*/

    /*square s;
    two_D_shapes *t=&s;
                            //2d shapes to square working
    t->setter();
    t->getter();*/

    /*circle c1;
    two_D_shapes *a=&c1;
                            //2d shaped to circle working
    a->setter();
    a->getter();*/

    /*two_D_shapes g;
    shapes *d=&g;
                            //shapes to 2d shaped working 
    d->setter();
    d->getter();*/

    /*three_D_shapes h;
    shapes *e=&h;
                            //shapes to 3d shapes working
    e->setter();
    e->getter();*/

    /*circle c2;
    shapes *ca=&c2;
                            //shapes to circle working
    ca->setter();
    ca->getter();*/

    /*pyramid p1;
    shapes *k=&p1;
                            //shapes to pyramid working
    k->setter();
    k->getter();*/

    //mainly all virtual functions working

    return 0;
}