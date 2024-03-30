#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
     int mark;

     cout<<"Enter marks:";

     cin>>mark;

     if(mark>100)
     {
         cout<<"Invalid number";
     }
     else if(mark<0)
     {
         cout<<"Invalid number";
     }
     else if(mark>=80)
     {
         cout<<"Congratulate you got A+";
     }
     else if(mark>=70)
     {
         cout<<"A";
     }
     else if(mark>=60)
     {
         cout<<"A-";
     }
     else if(mark>=50)
     {
         cout<<"B";
     }
     else if(mark>=40)
     {
         cout<<"c";
     }
     else if(mark>=33)
     {
         cout<<"D";
     }
     else
     {
         cout<<"sorry for that you are fail"<<endl;
         cout<<"Don,t warry try to your best next year";
     }



    getch();
}
