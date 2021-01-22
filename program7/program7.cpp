#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int num1, num2, result;
    cout << "Enter num1 : ";
    cin >> num1;

    cout << "Enter num2 : ";
    cin >> num2;

    result = num1 + num2;
    cout << "sum is : " << result;

    result = num1 - num2;
    cout << "sub is : " << result;

    result = num1 * num2;
    cout << "Mul is : " << result;

    result = num1 / num2;
    cout << "div is : " << result;


    result = num1 % num2;
    cout << "Remainder is : " << result;


    getch();
}