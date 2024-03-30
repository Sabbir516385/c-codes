#include<iostream>
#include<conio.h>
using namespace std;

class Student
{
    public :
    string name;

    Student(string name)  //local variable
    {
       this -> name=name;
    }
    void display()
    {
        cout<<name;
    }
};

int main()
{

  Student ba("Sabbir");
  ba.display();

  getch();
}
