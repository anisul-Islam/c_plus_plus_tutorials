
// break and continue keyword

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int x;
    for(x=1; x<=100; x++)
    {
        if(x==10)
            continue;

        cout << x <<endl;

        if(x==20)
            break;
    }

    getch();
}