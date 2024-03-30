#include<iostream>
#include<conio.h>
using namespace std;

class A
{
 private :
     string name="SABBIR";
     int id=629039;
   public:
    friend class B;
};

class B
{
   public :
       void display(A sa)
       {
          cout<< sa.name<<endl;
          cout<<sa.id<<endl;
       }

};

int main()
{

    A ob1;
    B ob2;
    ob2.display(ob1);



    getch();
}
