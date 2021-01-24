#include <iostream>
#include <conio.h>
using namespace std;

class Student 
{

    public:
        //variables
        int id;
        double gpa;
        //functions

};

int main()
{

     cout << "ID" << "  " << "GPA" << endl;
     cout << "-----------"<< endl;


    Student s1,s2;
    s1.id = 101;
    s1.gpa = 3.92;

    cout << s1.id << "  " << s1.gpa << endl;


    s2.id = 102;
    s2.gpa = 3.44;

    cout << s2.id << "  " << s2.gpa << endl;

    getch();
}