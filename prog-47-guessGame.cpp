#include<iostream>
#include<stdlib.h>
#include<conio.h>

using namespace std;

int main()
{
     while(1)
     {
         int guessNumber,randomNumber;

        cout<<"Enter your guess between 1 to 10:";
        cin>>guessNumber;

        randomNumber= 1+rand()%10;

     if(guessNumber==randomNumber)
       {
          cout<<"You have won"<<endl<<endl<<endl;
       }

     else
       {
         cout<<"You have lost!!!!! - again try "<<endl<<endl;
         cout<<"The ramdon number is:"<<randomNumber<<endl<<endl;
       }
    }



    getch();
}
