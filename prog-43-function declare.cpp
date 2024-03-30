#include<iostream>
#include<conio.h>

using namespace std;

 void addition(int a,int b){

   int sum=a+b;
   cout<<"The sum is:"<<sum<<endl;


 }
 void substraction(int a,int b){

   int substraction=a-b;
   cout<<"The substraction is:"<<substraction<<endl;


 }
void multiplication(int a,int b){

   int multiplication=a*b;
   cout<<"The multiplication is:"<<multiplication<<endl;


 }
void division(int a,int b){

   float division=(float)a/b;
   cout<<"The division is:"<<division<<endl;


 }


int main()
{

    addition(10,20);
    substraction(20,30);
    multiplication(3,2434);
    division(12,3);

    cout<<"All values are plinted:";


    getch();
}
