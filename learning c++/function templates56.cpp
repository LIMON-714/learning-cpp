#include <iostream>
#include <conio.h>
using namespace std;

template <class myTemplate, class myTemplate2>
myTemplate add (myTemplate a, myTemplate2 b)
{
    return a+b; // adding that
}

int main()
{
    cout<<endl<< "The function is :  "<< add(10,20) << endl;
    cout<<endl << "The function is :  "<< add(10.5,20) << endl;

    getch();
}
