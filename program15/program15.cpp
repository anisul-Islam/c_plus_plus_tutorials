// Relational operator
// statement
// control statement - conditional (if, else if, else), loop (for, while, do while), jump (break, continue, return)
// if, else if, else statement
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int number;

    if(number > 0)
    {
        cout << "Positive" << endl;
    }
    else if(number < 0)
    {
        cout << "Negative" << endl;
    }
    else
    {
        cout << "Zero" << endl;
    }

    getch();
}