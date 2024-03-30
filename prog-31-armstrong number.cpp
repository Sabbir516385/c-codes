#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int num,temp,sum,r;

    cout<<"Enter any number if you check armstrong number:";
    cin>>num;

    sum=0;
    temp=num;

    while(temp!=0)
    {

        r=temp%10;
        sum=sum+r*r*r;
        temp=temp/10;

    }

    if(num==sum)
    {
        cout<<"This is armstrong number";
    }

    else{
        cout<<"This is not Armstrong number";
    }



    getch();
}

