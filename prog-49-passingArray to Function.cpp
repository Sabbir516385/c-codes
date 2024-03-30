#include<iostream>
#include<conio.h>

using namespace std;

void display( int sabbir[],int arraySize)
{
    for(int i=0;i<arraySize;i++)
    {
        cout<<sabbir[i]<<" ";
    }


}


int main()
{

    int number [6]={10,20,30,40,50,60};
    display(number,6);



    getch();
}
