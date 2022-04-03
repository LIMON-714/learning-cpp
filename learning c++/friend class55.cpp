
#include <iostream>
#include <conio.h>
using namespace std;

class A
{
    private:
        int id = 714;
        string name = "LIMON RAHMAN ";

    public:
        friend class B;   // a class that can access the private and protected members of a class in which it is declared as friend
};

class B
{
    public:
        void display(A obj)
        {
            cout << obj.id << " " << obj.name << endl;

        }
};

int main()
{
    A ob1;
    B ob2;
    ob2.display(ob1);

    cout<<endl<< ".....thank you......";
    getch();
}
