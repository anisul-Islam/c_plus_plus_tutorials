// special operator sizeof(), comma operator
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int a;
    float f;
    double d;
    char ch;
    char name[20];
    int num1, num2, sum;

    int c = sizeof(a);
    cout << c << endl;


    c = sizeof(name);
    cout << c << endl;

    sum = (num1=20, num2=10, sum = num1 + num2);
    cout << "sum is " << sum << endl;

    getch();
}