#include <iostream>

using namespace std;

int main()
{
  // for loop, while loop and do while loop
  // when to use them?
  /*
    Q1: count before starting? yes => for loop, no => move question number 2
    Q2: must run at least once? yes => do while loop, no => use while loop
  */

  /*
  Multiplication table
  Number: 5
  5x1=5
  5x2=10
  .
  .
  .
  5x10=50
  */

  // for loop
  int number = 5;
  for (int i = 1; i <= 10; i++)
  {
    cout << number << " X " << i << " = " << number * i << endl;
  }
  cout << endl;

  // while loop => number = 123, sum=1+2+3 => sum=6
  int sum = 0;
  int num, remainder;
  cout << "Enter a number: ";
  cin >> num;

  int temp = num;

  while (temp > 0)
  {
    remainder = temp % 10;
    sum = sum + remainder;
    temp = temp / 10;
  }
  cout << "Sum of digits for " << num << " : " << sum << endl;

  // do -while loop
  int mark;
  do
  {
    cout << "Mark: (0-100): ";
    cin >> mark;
  } while (mark < 0 || mark > 100);
  cout << "Mark is : " << mark << endl;
  return 0;
}