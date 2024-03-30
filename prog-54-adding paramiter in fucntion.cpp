#include<iostream>
#include<conio.h>
using namespace std;

class Student{

public :

    string name;
    float gpa;
    int number;

    void display()
    {
             cout<<"Name:"<<name<<endl;
             cout<<"GPA:"<<gpa<<endl;
             cout<<"Id:"<<number<<endl;
             cout<<endl<<endl;
    }


    void SetValue(string a,float b,int c)
    {
        name=a;
        gpa=b;
        number=c;

    }


};


int main()
{
    Student sabbir,polok,muskan;

    sabbir.SetValue("Sabbir ahmed",4.00,1761513835);
    sabbir.display();

    polok.SetValue("Polok Hossain",4.00,192843234);
    polok.display();

    muskan.SetValue("Muskan jara",4.00,4298472);
    muskan.display();



    getch();
}
