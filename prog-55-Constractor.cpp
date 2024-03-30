#include<iostream>
#include<conio.h>
using namespace std;

class Student{
public :
    string name;

    double gpa;
    int number;

    void display()
    {
             cout<<"Name:"<<name<<endl;
             cout<<"GPA:"<<gpa<<endl;
             cout<<"Id:"<<number<<endl;
             cout<<endl<<endl;
    }

    Student(string n,double g,int num)
    {
        name=n;
        gpa=g;
        number=num;
    }

};




int main()
{

    Student sabbir("Sabbir ahmed",4.00,2934734);
    sabbir.display();


    Student polok("Polok Hossain",4.00,2497439);
    polok.display();


    Student muskan("muskan jara",4.00,592873);
    muskan.display();

    Student shammi("Shammi akter",4.00,45329);
    shammi.display();




    getch();

}
