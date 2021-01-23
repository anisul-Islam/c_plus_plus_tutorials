// Random Number 
#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

int main()
{

    int x;

    for(x=1; x<=5; x++)
    {
         int randomNumber = rand() % 5 + 1;
        cout << "Random Number is : " << randomNumber << endl; 
    }

    getch();
}