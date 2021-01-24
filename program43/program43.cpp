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

        void setValue(int x, double y)
        {
            id = x;
            gpa = y;
        }

};

int main()
{

     cout << "ID" << "  " << "GPA" << endl;
     cout << "-----------"<< endl;


    Student s1,s2;
    s1.setValue(101, 3.92);
    s1.display();

    s2.setValue(102, 3.44);
    s2.display();

    getch();
}