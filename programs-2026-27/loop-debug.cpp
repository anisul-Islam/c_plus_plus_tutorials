#include <iostream>
using namespace std;

int main()
{
  int n = 5;
  int sum = 0;
  for (int i = 1; i < n; i++)
  {
    sum += i;
    // cout << "[debug] i = " << i << ", sum = " << sum << endl;
  }
  cout << "sum of 1 to " << n << " = " << sum << endl;
  return 0;
}