#include <iostream>
#include <conio.h>
using namespace std;

int main()
{

    float base, height, area;

    cout << "Enter Base = ";
    cin >> base;

    cout << "Enter Height = ";
    cin >> height;

    // area = (float)1/2 * base * height;
    // area = 1.0/2 * base * height;
    area = 0.5 * base * height;


    cout << "Area of triangle : " << area;

    getch();
}