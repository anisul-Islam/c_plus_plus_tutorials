#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int num, i;

    cout << "Enter a number : ";
    cin >> num;

    for (i=1; i<=10; i++)
    {
        cout << num << " X " << i << " = " << num * i << endl;
    }


    getch();
}