#include<iostream>
#include<conio.h>

using namespace std;

int main()
{

    int n,i,fact=1;

    cout<<"Enter any number:";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        fact=fact*i;  /*fact=1*1=1
                        fact=1*2=2
                         fact=2*3=6
                        fact=6*4=24
                        fact=24*5=120 jodi amra 5 input nei tahoel answer hobe 120.
                       */
    }

    cout<<fact;



    getch();
}
