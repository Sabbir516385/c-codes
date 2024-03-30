#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int n,first=0,second=1,count1=0,fibo;

    cout<<"Enter any number:";
    cin>>n;

    while(count1<n)
    {
        if(count1<=1){

            fibo=count1;

        }
        else{
            fibo=first+second;
            first=second;
            second=fibo;
        }

        cout<<fibo<<" ";
        count1++;
    }




    getch();
}
