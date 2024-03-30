#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
     while(1)
     {
      try {

     int num1,num2;
     cout<<"Enter first number:";

     cin>>num1;

     cout<<"Enter second number:";

     cin>>num2;

     if(num2==0)
      {
        throw -1;
      }

        double result = (double)num1 / num2;

        cout<<"Result:"<<result<<endl;
      }




     catch(...)
      {
         cout<<"divided by zero is not possible...!!!"<<endl;
         cout<<"Please try again!!!!"<<endl;
      }
    }



}
