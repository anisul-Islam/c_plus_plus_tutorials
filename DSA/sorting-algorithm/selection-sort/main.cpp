#include <iostream>
#include <array>

using namespace std;

int main()
{
  array<int, 5> arr = {29, 10, 14, 37, 3};

  for (int i = 0; i < arr.size() - 1; i++)
  {
    int min = i;
    for (int j = i + 1; j < arr.size(); j++)
    {
      if (arr[min] > arr[j])
      {
        min = j;
      }
    }
    if (i != min)
    {
      swap(arr[i], arr[min]);
    }
  }

  for (auto &&item : arr)
  {
    cout << "  " << item;
  }

  return 0;
}