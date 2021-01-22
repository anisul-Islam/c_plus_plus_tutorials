#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

// showpoint
// noshowpoint
// setprecision

int main()
{
    float num1, num2, result;
    cout << "Enter num1 : ";
    cin >> num1;

    cout << "Enter num2 : ";
    cin >> num2;

    cout << showpoint;

    result = num1 + num2;
    cout << setw(10) << "sum is : " << result << endl;

    result = num1 - num2;
    cout << setw(10) << "sub is : " << result << endl;

    cout << noshowpoint;
    result = num1 * num2;
    cout << setw(10) << "Mul is : " << result << endl;

    cout << fixed;
    cout << setprecision(5);
    result = num1 / num2;
    cout << setw(10) << "div is : " << result <<endl;

    // remainder is not possible between float number
    // result = num1 % num2;
    // cout << "Remainder is : " << result <<endl;


    getch();
}