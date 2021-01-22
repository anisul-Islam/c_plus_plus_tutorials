// Letter grade program

#include <iostream>
#include <conio.h>
using namespace std;


int main()
{
    int marks;
    cout << "Enter your marks = ";
    cin >> marks;

    if(marks>100)
    {
        cout << "Invalid Mark" << endl;
    }
    else if(marks< 0)
    {
        cout << "Invalid Mark" << endl;
    }
    else if(marks>=80)
    {
        cout << "A++" << endl;
    }
    else if(marks>=70)
    {
        cout << "A" << endl;
    }
    else if(marks>=60)
    {
        cout << "A-" << endl;
    }
    else if(marks>=50)
    {
        cout << "B" << endl;
    }
    else if(marks>=40)
    {
        cout << "C" << endl;
    }
    else if(marks>=33)
    {
        cout << "D" << endl;
    }
    else
    {
        cout << "Fail";
    }

    getch();
}