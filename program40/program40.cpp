// Recursion

#include <iostream>
#include <conio.h>
using namespace std;


int factorial(int n)
{

    if(n==1)
        return n;    
    else
        return n * factorial(n-1);
}

int main()
{

    cout << "Factorial of 5 = " << factorial (5) << endl;

    getch();
}