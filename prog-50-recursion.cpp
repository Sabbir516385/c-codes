#include<iostream>
#include<conio.h>

using namespace std;

void display(int *num) //formal parameter
{

   *num=20;

}

                                      //jokhon formal parameter a value cng kora hoi tokhon actual parameter
                                      //a value cng hoina kintu jokhon actual parameter a value address pass
                                      //kora hoi tokhon puro man tai cng hoye jai..
int main()
{

    int x=10;
    cout<<"Before calling the function:"<<x<<endl;

    display(&x);  //actual parameter
    cout<<"After calling the function:"<<x<<endl;



    getch();
}
