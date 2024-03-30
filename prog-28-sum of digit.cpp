#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int num,temp,r,sum=0;

    cout<<"Enter any interger number if you check sum of digit:";
    cin>>num;

    temp=num;

    while(temp!=0)
    {
        r=temp%10;
        sum=sum+r;
        temp=temp/10;
    }

    cout<<"This is sum of digit:"<<sum;





    getch();
}
