#include<iostream>
#include<stdlib.h>
#include<conio.h>

using namespace std;

int main()
{

    for(int i=1;i<20;i++)
    {
        int randomNumber=rand()%5;
         cout<<"Random number is="<<randomNumber;
         cout<<endl;
    }



    getch();
}
