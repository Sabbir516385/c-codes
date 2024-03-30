#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int n;
    cout<<"Enter any number:";
    cin>>n;

    int students[n];

    int sum=0;

    //input

    for(int i=0;i<n;i++)
    {
        cout<<"Students of marks: "<<i+1<<" = ";
        cin>>students[i];
        sum=sum+students[i];
    }

    cout<<"Total mark of students are :" <<sum<<endl;

    cout<<endl;
    float avg=(float)sum/n;

    cout<<"The Avarage is :"<<avg<<endl;

    //maximum and minumun ber korar program

    int max=students[0];
    int min=students[0];

    for(int j=1;j<n;j++)
    {
        if(max<students[j])
        {
            max=students[j];
        }
        if(min>students[j])
        {
            min=students[j];
        }

    }

    cout<<"Maximun number is:"<<max<<endl;
    cout<<"Minimun number is:"<<min<<endl;




    getch();
}
