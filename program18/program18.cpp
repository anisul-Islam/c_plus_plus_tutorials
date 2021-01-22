// Vowel / Consonant

#include <iostream>
#include <conio.h>
using namespace std;


int main()
{
    char ch;
    cout << "Enter a letter = ";
    cin >> ch;

    // convert any uppercase letter to lowercase letter
    ch = tolower(ch);

    if(ch =='a' || ch =='e' || ch=='i' || ch=='o' || ch=='u')
    {
        cout << "Vowel" << endl;
    }    
  
    else
    {
        cout << "Consonant" << endl;
    }

    getch();
}