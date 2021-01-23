#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int row, col, A[2][2], B[2][2];

    cout << "Enter the element for Matrix" << endl;

    for(row=0; row<2; row++)
    {
        for(col=0; col<2; col++)
        {
            cout << "A[" << row << "][" << col << "] = ";
            cin >> A[row][col]; 
        }
    }

    for(row=0; row<2; row++)
    {
        for(col=0; col<2; col++)
        {
            cout << A[row][col] << " "; 
        }
        cout << endl;
    }
    
   

    getch();
}