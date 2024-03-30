#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

int main()
{
    int num1,num2;

    cout<<"Enter two number=";  //user theke input neyar process >> ai simble use korte hoi
    cin>>num1>>num2;

    cout<<showpoint;
    cout<<fixed;
    cout<<setprecision(2);

    float sum=num1+num2;

    cout<<setw(25)<<"The sum is:"<<sum<<endl;


     float sub=num1-num2;

    cout<<setw(25)<<"The substraction is:"<<sub<<endl;

     float mul= num1*num2;

    cout<<setw(25)<<"The multiplication is:"<<mul<<endl;

    double div= (float)num1/num2;

    cout<<setw(25)<<"The division is:"<<div<<endl;

      //int rem=num1%num2;
    //cout<<"The Reminder is:"<<rem;


    getch();
}
