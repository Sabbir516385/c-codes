#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int num;

    cout<<"Enter any number if you check what is this number:";

    cin>>num;

    if(num>0)
    {
        cout<<"This is positive number";

    }
    else if(num<0)
    {
        cout<<"This is negative number";
    }
    else
    {
        cout<<"This is Zero number";
    }


    getch();
}
