#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int num,countnum=0;

    cout<<"Enter any integer number:";
    cin>>num;

    while(num!=0)
    {
        num=num/10;
        ++countnum;
    }

    cout<<"Total number of digits:"<<countnum;



    getch();
}
