#include<iostream>
#include<conio.h>
#include<fstream>


using namespace std;


int main()
{
  string line;

  ifstream file("limon.txt");// file name


 while(getline(file,line))
 {
     cout<< line<<endl;
 }

  file.close();
    getch();
}
