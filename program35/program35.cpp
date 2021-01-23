#include<iostream>
#include<conio.h>
using namespace std;

// function without parameter
void add()
{
    cout << "Nothing to add" << endl ; 
}


// function with parameter having default values
void add(int x=10, int y=10)
{
    int sum = x + y;
    cout << "Sum : " << sum  << endl; 
}

// function returning a value
int square (int x)
{
    return x*x; 
}

int main()
{

    add();
    add(10,20);

    cout << "Square of 4 = " << square(4) << endl;

    getch();
}