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
        void display();

        // default constructor
        Student();

        // parametrized constructor
        Student(int x, double y);

};

