#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    char letter;
    cout<<"Enter any letter:";
    cin>>letter;

    if(letter=='a'|| letter =='e' || letter=='i' ||letter=='o' || letter=='u')
    {
        cout<<"This is vowel";
    }
    else
    {
        cout<<"This is consonant";
    }


    getch();
}
