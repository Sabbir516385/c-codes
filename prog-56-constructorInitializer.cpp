#include<iostream>
#include<conio.h>
using namespace std;

class Teacher
{
    public:
     const int sallery; //const variable er jonno constructor list er proyojon
     const int paid;
     int borrow;

    Teacher(int a,int b,int c)
    :sallery(a), paid(b) //Constractor list/member initializer list

    {
        cout<<"Sabbir er sallery:"<<sallery<<endl;
        cout<<"Sabbir er sallery Paid:"<<paid<<endl;
        borrow=c;
        cout<<"Sabbir pabe:"<<borrow;
    }
};

int main()
{

    Teacher sa(20000,19500,500);



    getch();
}
