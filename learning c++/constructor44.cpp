#include <iostream>
#include <conio.h>
using namespace std;

class Student
{

public:
    //variables
    int id;
    double gpa;

    //functions
    void display()
    {
        cout << id << "  " << gpa << endl;
    }

    // default constructor
    Student()  // same class name
    {
        cout << "This is a default constructor" << endl;
    }

    // parametrized constructor
    Student(int x, double y)
    {
        id = x;
        gpa = y;
    }

};

int main()
{

    Student();

    cout<<endl << "ID" << "    " << "GPA" << endl;
    cout << "-----------"<< endl;

    Student s1(101,3.33);
    s1.display();

    Student s2(102,3.24);
    s2.display();

    getch();
}
