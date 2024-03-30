#include<iostream>
#include<conio.h>
using namespace std;

class Shape
{
public :
     double dim1,dim2;

    Shape(double dim1,double dim2)
    {
        this -> dim1 =dim1;
        this -> dim2 =dim2;
    }
    virtual double area()
     {
         return 0;
     }
};

class Triangle : public Shape
{
public:
    // double dim1,dim2;

    Triangle(double dim1,double dim2)
    : Shape(dim1, dim2)
    {

    }

    double area()
    {
        return 0.5 * dim1 * dim2 ;
    }

};

class Rectangle : public Shape
{
public :
    //double dim1,dim2;

    Rectangle(double dim1,double dim2)
    : Shape(dim1, dim2)
    {

    }

    double area()
    {
        return dim1 * dim2 ;
    }
};


int main()
{

    Shape *s;

    Triangle t(10,20);
    s =&t;
    cout<<"The Triangle area is:"<< s -> area()<<endl;

    Rectangle r(10,20);
    s=&r;
    cout<<"The Rectangle area is:"<< s ->area()<<endl;



    getch();
}