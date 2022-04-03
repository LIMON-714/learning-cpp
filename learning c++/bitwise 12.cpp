// Bitwise Operator -> & (and), | (or), ^ (exor), >> (right shift) , << (left shift), ~ (not)
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
  int a = 33; // or you can input
  int b = 22; //
  int c;

  c = a & b;
  cout <<endl<< "a & b = " << c;

  c = a | b;
  cout <<endl<< "a | b = " << c;

  c = a ^ b;
  cout<<endl<< "a ^ b = " << c;

// 2 times divided by 2
  c = a >> 2;
  cout <<endl<< "a >> 2 = " << c;

// 3 times divided by 2
  c = a >> 3;
  cout <<endl<< "a >> 3 = " << c;


  c = a << 2;
  cout<<endl<< "a << 2 = " << c;


    getch();
}
