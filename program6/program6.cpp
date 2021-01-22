#include <iostream>
#include <conio.h>
using namespace std;

int main ()
{
   
    char name[20];
    float gpa;

    // taking user input
    cout << "Enter your name : " << endl;
    cin >> name;
    cout << "Enter your gpa : " << endl;
    cin >> gpa;

    //printing 
    cout << "---------------------------" << endl;
    cout << "Name : " << name << endl;
    cout << "GPA : " << gpa << endl;
    cout << "---------------------------" << endl;
     getch();
}