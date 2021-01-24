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
        void display()
        {
            cout << id << "  " << gpa << endl;
        }

};

int main()
{

     cout << "ID" << "  " << "GPA" << endl;
     cout << "-----------"<< endl;


    Student s1,s2;
    s1.id = 101;
    s1.gpa = 3.92;
    s1.display();

   


    s2.id = 102;
    s2.gpa = 3.44;
    s2.display();

    getch();
}