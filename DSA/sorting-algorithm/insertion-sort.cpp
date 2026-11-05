#include <iostream>
#include <array>

using namespace std;

int main()
{
  array<int, 4> a = {5, 2, 4, 1};

  for (int i = 1; i < a.size(); i++)
  {
    int key = a[i];
    int j = i - 1;

    // shifting
    while (j >= 0 && a[j] > key)
    {
      a[j + 1] = a[j];
      j--;
    }

    // insertion
    a[j + 1] = key;
  }

  for (auto &&item : a)
  {
    cout << " " << item;
  }
  cout << endl;

  return 0;
}