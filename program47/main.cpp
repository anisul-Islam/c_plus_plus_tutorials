#include <iostream>
#include <conio.h>
#include "Student/Student.h"
using namespace std;

int main()
{
    Student s1;
    Student *p = &s1;

    p -> display();

    getch();
}