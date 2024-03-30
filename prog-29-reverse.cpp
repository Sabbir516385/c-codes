#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int num,r,sum,temp;

    cout<<"Enter any integer number:";
    cin>>num;

     sum=0;

    temp=num;

    while(temp!=0)
    {

        r=temp%10;
        sum=sum*10+r;
        temp=temp/10;

    }

    cout<<"The reverse number is:"<<sum<<endl;
    cout<<"Dekhliya mera kamal";




    getch();
}
