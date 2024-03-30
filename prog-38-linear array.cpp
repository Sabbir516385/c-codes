#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int a[]={10,20,2,44,52,23,12,34};
    int i,value,pos=-1;

    cout<<"Enter any value you want to search:";
    cin>>value;


    for(i=0;i<8;i++)
    {
        if(value==a[i])
        {
            pos=i+1;
            break;
        }

    }
    if(pos==-1)
    {

        cout<<"Item is not found";
    }
    else{
        cout<<"Item is found"<<endl<<"Position:"<<pos;
    }


    getch();
}
