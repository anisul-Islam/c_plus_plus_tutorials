// Temperature converter
// celsius = (fahrenheit-32) / 1.8
// fahrenheit = 1.8 celsius + 32

#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    double celsius, fahrenheit;
    cout << "Enter Celsius: ";
    cin >> celsius;

    fahrenheit = 1.8 * celsius + 32;

    cout << "Fahrenheit = " << fahrenheit;
    getch();
}