#include <iostream>
#include "Destructor.h"
#include <conio.h>
using namespace std;


//functions
Destructor:: Destructor()
{
    cout << "I am constructor " << endl;
}

Destructor:: ~Destructor()
{
    cout << "I am destructor " << endl;
}

void Destructor:: display()
{
    cout << "I am display function " << endl;
}