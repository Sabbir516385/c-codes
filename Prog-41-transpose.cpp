#include<iostream>
#include<conio.h>

using namespace std;

int main()
{

    int A[10][10],transpose[10][10],row,col,i,j;

    cout<<"Enter Row and col number:";
    cin>>row>>col;

    //input neyar jonno
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cout<<"["<<i<<"]"<<"["<<j<<"]"<<"=";
            cin>>A[i][j];
        }
        cout<<endl;
    }

    // make a transpose matrix
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            transpose[j][i]=A[i][j];
        }
    }

    //input matrix print

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    //printing transpose matrix

    cout<<"The Transpose matrix is:"<<endl;
    for(i=0;i<col;i++)
    {
        for(j=0;j<row;j++)
        {
            cout<<transpose[i][j]<<" ";
        }
        cout<<endl;
    }


    getch();
}
