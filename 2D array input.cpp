#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int A[3][4];
    int row,col;

    cout<<"Enter the matrix values:"<<endl;


    for(int row=0;row<3;row++)
    {
        for(col=0;col<4;col++)
        {
            cout<<"["<<row<<"]"<<"["<<col<<"]"<<"=";
            cin>>A[row][col];
        }
    }


    for(int row=0;row<3;row++)
    {
        for(int col=0;col<4;col++)
        {
            cout<<A[row][col]<<" ";
        }
        cout<<endl;
    }


    getch();
}
