#include<iostream>
#include<conio.h>
#include<fstream> // for file
#include<string> // for string
using namespace std;

int main()
{

    string name;

    ofstream file;

    file.open("student.txt", ios::out|ios::app);// for create file

    cout<< "write your paragraaph as you like: ";

    getline(cin,name); // for get user input in file

    cout<< "data stored//";

    file<< "welcome ! "<< name<<endl;


    file.close();
    getch();
}
