#include <iostream>
#include <conio.h>
using namespace std;


int main()
{
   
  while(1)
  {
      try{
            int num1, num2;
            cout << "Enter first number : ";
            cin >> num1;

            cout << "Enter Second number : ";
            cin >> num2;

            if(num2==0)
            {
                throw -1;
            }

            double result = (double) num1 / num2; 
            cout << "Result is : " << result <<  endl;
        }
        catch(...)
        {
            cout << "Divide by 0 is not possible" << endl;
            cout << "Please try again" << endl;
        }
  }

 
}