#include <iostream>
#include <climits>
#include <print>

using namespace std;

int main()
{
  // Integer Overflow
  int x = 2147483646;
  if (x == INT_MAX)
  {
    println("Adding a value is not possible, Integer overflow error");
  }
  else
  {
    x = x + 1;
    println("x = {}", x);
  }

  return 0;
}