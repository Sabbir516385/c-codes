#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int n,fibo,i;
    cout<<"How many Fibonacci number you have seen:";
    cin>>n;
    int a[30];
     a[0]=0;
     a[1]=1;


    for(i=2;i<n;i++)
    {
        a[i]=a[i-1]+a[i-2];

    }

    cout<<endl;

    //output neyar jonno loop use korbo

    for(i=0;i<n;i++)
    {

        cout<<a[i]<<" ";
    }



    getch();
}
