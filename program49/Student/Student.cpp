#include <iostream>
#include "Student.h"
using namespace std;

void Student :: setName (string name)
{
    this -> name = name;
}

string Student :: getName ()
{
    return name;
}
void Student :: setAge (int age)
{
    this -> age = age;
}

int Student :: getAge ()
{
    return age;
}