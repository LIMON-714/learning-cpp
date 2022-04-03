#include<iostream>
#include<conio.h>

using namespace std;
 class myClass{

 public:
     void display1()const{

cout<< "this is display function//"<<endl;

     };

 };

int main()

{
 const myClass ob;
 ob.display1();

    getch();
}

