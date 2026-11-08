#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "=== Number Analyzer ===" << endl;
  cout << "Enter a positive number (0 to quit): ";
  cin >> n;

  while (n != 0)
  {
    // TODO 1: if n < 0, print a message, read n again and continue
    if (n < 0)
    {
      cout << "Please enter a positive number." << endl;
      cin >> n;
      continue;
    }

    // TODO 2: copy n into t and use a while loop with % 10 and / 10
    //         to find digits, digitSum and reversed
    int t = n; // t=153
    int digits = 0, digitSum = 0, reversed = 0;
    while (t != 0)
    {
      int d = t % 10;
      digitSum += d;
      digits++;
      reversed = reversed * 10 + d;
      t /= 10;
    }
    cout << "\nNumber: " << n << endl;
    cout << "Digits: " << digits << ", digit sum: " << digitSum << ", reversed: " << reversed << endl;

    // TODO 3: palindrome check (reversed == n)
    if (reversed == n)
      cout << "Palindrome: yes" << endl;
    else
      cout << "Palindrome: no" << endl;

    // TODO 4: for loop from 1 to n: print factors, count them,
    //         and add up the factors except n itself
    int factorCount = 0, properSum = 0;
    cout << "Factors: ";
    for (int i = 1; i <= n; i++)
    {
      if (n % i == 0)
      {
        cout << " " << i;
        factorCount++;
        if (i != n)
          properSum += i;
      }
    }
    cout << endl;

    // TODO 5: prime (exactly 2 factors) and perfect (sum == n, n > 1)
    if (factorCount == 2)
      cout << "Prime: yes" << endl;
    else
      cout << "Prime: no" << endl;

    if (n > 1 && properSum == n)
      cout << "Perfect: yes" << endl;
    else
      cout << "Perfect: no" << endl;

    // TODO 6: Armstrong: for each digit, multiply it by itself
    //         'digits' times with a for loop, and add up the results
    // n=153, digits=3
    int armSum = 0;
    t = n;
    while (t != 0)
    {
      int d = t % 10;
      int power = 1;
      for (int k = 1; k <= digits; k++)
      {
        power *= d;
      }
      armSum += power;
      t /= 10;
    }
    if (armSum == n)
      cout << "Armstrong: yes" << endl;
    else
      cout << "Armstrong: no" << endl;

    // TODO 7: table from 1 to 10, new line after every 5th entry
    cout << "Table of " << n << ":" << endl;
    for (int i = 1; i <= 10; i++)
    {
      cout << " " << n << " X " << i << " = " << n * i;
      if (i % 5 == 0)
        cout << endl;
    }

    // TODO 8: ask for the next number
    cout
        << "Enter a positive number (0 to quit): ";
    cin >> n;
  }
  cout << "Goodbye!" << endl;
  return 0;
}