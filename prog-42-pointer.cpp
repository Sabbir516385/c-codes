#include<iostream>

#include<conio.h>

using namespace std;

int main()
{

    int x1 = 10;
    int x2 = 20;

    int *p1,*p2;

    p1= &x1;
    p2= &x2;

    int sum=*p1 + *p2;

    cout<<sum<<endl; //eta x er value output debe




    getch();
}
