// Inheritance example
#include <iostream>
#include <conio.h>
using namespace std;

class Person
{
    public:
        string name;
        int age;

        void display1()
        {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
        }
};

class Student : public Person
{
    // name, age, display()
    public:
        int id;

        void display2()
        {
            cout << "ID: " << id << endl;
            display1();
        }


};

int main()
{

    Student s1;
    s1.id = 101;
    s1.name = "Anisul Islam";
    s1.age = 29;
    s1.display2();

    getch();
}