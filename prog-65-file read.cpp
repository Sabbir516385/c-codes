#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    string line;
    ifstream file("details.txt");  //file theke kono data read korar jonno <ifstream>use kora hoi


    while(getline(file,line))
    {
       cout<<line<<endl;
    }

    file.close();





}
