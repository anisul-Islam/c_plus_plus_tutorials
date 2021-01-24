#include <iostream>
#include "Student/Student.h"
#include <conio.h>
using namespace std;


int main()
{
    Student();

    cout << "ID" << "  " << "GPA" << endl;
    cout << "-----------"<< endl;

    Student s1(101,3.92);
    s1.display();

    Student s2(102,3.44);
    s2.display();

    getch();
}