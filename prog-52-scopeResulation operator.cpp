#include<iostream>
#include<conio.h>

using namespace std;

int x=390;

int main()
{
    int x= 10;//this is local varaible

    :: x=23;

    cout<< :: x;

    getch();
}
