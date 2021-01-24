#include <iostream>
#include <conio.h>
#include "Student/Student.h"
using namespace std;


int main()
{
    Student s1;
    s1.setName("Anisul Islam");
    cout << s1.getName() << endl;


    s1.setAge(29);
    cout << s1.getAge() << endl;

    getch();
}