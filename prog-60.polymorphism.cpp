#include<iostream>
#include<conio.h>
using namespace std;

class Person
{
public :

    virtual void display()
    {
        cout<<"I am a person"<<endl;
    }

};

class Student : public Person
{
public :

    void display()
    {
        cout<<"I am a Student"<<endl;
    }

};

class Teacher : public Person
{
public :

    void display()
    {
        cout<<"I am a Teacher"<<endl;
    }

};

int main()
{

    Person *pa;

    Student sa;

    Teacher ta;

    pa = &sa;
    pa -> display();

    pa = &ta;
    pa -> display();



    getch();
}
