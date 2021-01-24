#include <iostream>
#include "Student.h"
#include <conio.h>
using namespace std;


Student::Student()
{
    cout << "This is a default constructor" << endl;
}
Student::Student(int x, double y)
{
    id = x;
    gpa = y;
}

//functions
void   Student:: display()
{
    cout << id << "  " << gpa << endl;
}