#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int num1, num2, result;
    cout << "Enter number1 : ";
    cin >> num1;

    cout << "Enter number2 : ";
    cin >> num2;

    result = num1 + num2;
    cout << "sum is : " << result << endl;

    result = num1 - num2;
    cout << "sub is : " << result << endl;

    result = num1 * num2;
    cout << "Mul is : " << result << endl;

    result = num1 / num2;
    cout << "div is : " << result <<endl;


    result = num1 % num2;
    cout << "Remainder is : " << result <<endl;


    getch();
}
