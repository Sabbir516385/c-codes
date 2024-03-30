#include<iostream>
#include<conio.h>

using namespace std;

int main()
{

   int i,n,count=0;

   cout<<"Enter any number:";
   cin>>n;

   for(i=2;i<n;i++)
   {
       if(n%i==0)
       {
           count++;
           break;
       }

   }

   if(count==0)
   {
       cout<<"prime number";
   }

   else
   {
       cout<<"not prime";
   }


    getch();
}
