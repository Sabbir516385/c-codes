#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int i,j,numOfRow,numOfCol;
    int A[10][10],B[10][10],C[10][10];

    cout<<"Enter the number of Rows and Cols:";
    cin>>numOfRow>>numOfCol;


    //A er row col input neyar jonno for loop
    cout<<"Enter elements for A matrix:"<<endl;

    for(i=0;i<numOfRow;i++)
    {
        cout<<endl;

        for(j=0;j<numOfCol;j++)
        {
            cout<<"A"<<"["<<i<<"]"<<"["<<j<<"]"<<" "<<"=";
            cin>>A[i][j];
        }
    }
    cout<<endl;


    cout<<"Enter elements for B matrix:"<<endl;

    for(i=0;i<numOfRow;i++)
    {
        cout<<endl;

        for(j=0;j<numOfCol;j++)
        {
            cout<<"B"<<"["<<i<<"]"<<"["<<j<<"]"<<" "<<"=";
            cin>>B[i][j];
        }
    }
    cout<<endl;

    //B er output dekhanor jonno for loop


    cout<<"Elements of A:"<<endl;
    for(i=0;i<numOfRow;i++)
    {

        for(j=0;j<numOfCol;j++)
        {
           cout<<A[i][j]<<" ";

        }
        cout<<endl;
    }
    cout<<endl;

     cout<<"Elements of B:"<<endl;
    for(i=0;i<numOfRow;i++)
    {

        for(j=0;j<numOfCol;j++)
        {
           cout<<B[i][j]<<" ";

        }
        cout<<endl;
    }



    //c er jonno loop cholbe

    for(i=0;i<numOfRow;i++)
    {
        for(j=0;j<numOfCol;j++)
        {

            C[i][j]=A[i][j]-B[i][j];
        }
    }

    cout<<"C=A-B:"<<endl;

    for(i=0;i<numOfRow;i++)
    {
        for(j=0;j<numOfCol;j++)
        {
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }








    getch();
}
