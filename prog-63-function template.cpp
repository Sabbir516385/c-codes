#include<iostream>
#include<conio.h>
using namespace std;
template <class sabbir>
sabbir add(sabbir a,sabbir b)
{
    return a+b;
}

int main()
{
    cout <<add(10,20)<<endl;
    cout <<add(10.56,20.21)<<endl;
    cout <<add(10.6,20.5)<<endl;
    getch();
}
