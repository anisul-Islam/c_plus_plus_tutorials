#include <cstring>
#include <iostream>
#include <conio.h>
using namespace std;

class Student
{

    private:
        string name;
        int age;

    public:
        void setName(string name);
        string getName();
        void setAge(int age);
        int getAge();
};