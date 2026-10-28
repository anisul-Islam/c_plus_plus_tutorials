#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

int main()
{
  array<int, 5> arr = {10, 20, 30, 40, 50};

  auto it = find(arr.begin(), arr.end(), 50);
  if (it != arr.end())
  {
    cout << "Found at : " << it - arr.begin();
  }
  else
  {
    cout << "Not found" << endl;
  }

  return 0;
}