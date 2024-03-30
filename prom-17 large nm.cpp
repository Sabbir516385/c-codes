#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int num1,num2,num3;

    cout<<"Enter 3 interger value:";
    cin>>num1>>num2>>num3;

    if(num1>num2 && num1>num3)
    {
        cout<<"large number="<<num1;
    }

    else if(num2>num1 && num2>num3)
    {
        cout<<"Large number="<<num2;
    }
    else
    {
        cout<<"Large number="<<num3;
    }



    getch();
}
