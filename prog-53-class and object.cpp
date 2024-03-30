#include<iostream>
#include<conio.h>
using namespace std;

class Student
{
public :
    int id;
        double gpa;
          string name;



          void display()
          {
             cout<<"Name:"<<name<<endl;
             cout<<"GPA:"<<gpa<<endl;
             cout<<"Id:"<<id<<endl;
             cout<<endl<<endl;
          }


};

int main()
{

    Student sabbir;

    sabbir.name ="Sabbir ahmed";
    sabbir.gpa=4.00;
    sabbir.id=609039;
    sabbir.display();




    Student polok;
    polok.name="Polok hossain";
    polok.gpa=4.00;
    polok.id=629211;
    polok.display();


    Student muskan;

    muskan.name="Muskan jara";
    muskan.gpa=4.00;
    muskan.id=42343;
    muskan.display();



    getch();
}
