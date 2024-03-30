#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int num,temp,r,sum;

    cout<<"Enter any number if you check palindrome number:";
    cin>>num;

    sum=0;

    temp=num;

    while(temp!=0)
    {
        r=temp%10;
        sum=sum*10+r;
        temp=temp/10;

    }


    if(num==sum)
    {
        cout<<"This is palindrome number";
    }

    else{
        cout<<"NO this is not Palindrome number";
    }




    getch();
}
