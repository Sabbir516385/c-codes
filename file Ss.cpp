#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()

{
    string name;
    int age;
    int number;
    ofstream file;
    file.open("Student-details.txt",ios::out|ios::app);
    for(int i=1;i<4;i++)
    {
        cout<<"Enter your name: ";
        getline(cin,name);
        file<<"Name:"<< name<<endl;
        cout<<"Enter your Age: ";
        cin>>age;
        file<<"Age:"<<age<<endl;
        cout<<"Enter your Phone Number: ";
        cin>>number;
        file<<"number:"<<number<<endl;

        cin.ignore();
    }

    file.close();




    return 0;
}
