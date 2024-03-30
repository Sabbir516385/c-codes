#include<iostream>
#include<conio.h>

using namespace std;

class Student
{
private :
    string name;
    public:
    void setName(string a)
    {
        name=a;
    }
    string getName()
    {
        return name;
    }
};

int main()
{

    Student sa;
    sa.setName("SABBIR");
    cout<<sa.getName();


    getch();
}
