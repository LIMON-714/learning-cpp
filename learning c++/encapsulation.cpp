#include <cstring>
#include <iostream>
#include <conio.h>
using namespace std;

class Student
{

    private:
        string name;
        int age;

    public:
        void setName(string name);
        string getName();
        void setAge(int age);
        int getAge();
};
int main()
{
    Student s1;
    s1.setName("LIMON RAHMAN");
    cout << s1.getName() << endl;


    s1.setAge(22);
    cout << s1.getAge() << endl;

    getch();
}
