#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int marks[5];

    //input neyar jonno loop

    for(int j=0;j<5;j++)
    {
        cout<<"Marks of students"<< j<<"=";
        cin>>marks[j];
    }

    //output er jonno loop

    for(int i=0;i<5;i++)
    {

        cout<<marks[i]<<" ";
    }



    getch();
}
