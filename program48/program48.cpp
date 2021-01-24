#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <cstring>
using namespace std;

int main()
{
    char name[30];
    char copyName[30];

    cout << "Enter your name please : ";
    gets(name);
    cout << "Hello " << name << endl;

    int len = strlen(name);
    cout << "Length of string : " << len << endl;

    strcpy(copyName, name);
    cout << "CopyName: " << copyName << endl;


    char msg1[] = "Hello";
    char msg2[] = " Everyone";
    strcat(msg1, msg2);
    cout << "Message1: " << msg1 << endl;

    int value = strcmp("Anis", "anis");
    if(value==0){
        cout << "Strings are equal" << endl;
    }else{
         cout << "Strings are not equal" << endl;
    }   

    getch();
}