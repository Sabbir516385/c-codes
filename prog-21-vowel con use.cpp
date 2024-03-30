#include<iostream>
#include<conio.h>
using namespace std;

int main()
{

     char ca;
     cout<<"Enter any letter=";
     cin>>ca;

      ca=tolower(ca);

     switch(ca)
     {

     case 'a':
     case 'e':
     case 'i':
     case 'o':
     case 'u':
       cout<<"vowel";
        break;

     default:
        cout<<"Consonant";









     }





    getch();
}

