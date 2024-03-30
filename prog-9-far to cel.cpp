#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    double far,cels;

    cout<<"Enter any Farenheit number:";
    cin>>far;

    cels=(far-32/9)*5;

    cout<<"The Celcius value is:"<<cels;


    getch();
}
