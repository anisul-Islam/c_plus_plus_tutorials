#include <iostream>

using namespace std;

int main()
{
  // Binary Search
  // array must be sorted

  int arr[] = {10, 20, 25, 30, 40, 50};
  int size = 6;
  int target = 125;
  int pos = -1;

  int low = 0;
  int high = size - 1;

  while (low <= high)
  {
    int mid = low + (high - low) / 2;
    if (arr[mid] == target)
    {
      pos = mid;
      break;
    }
    else if (arr[mid] > target)
    {
      high = mid - 1;
    }
    else
    {
      low = mid + 1;
    }
  }

  if (pos != -1)
  {
    cout << "Item found at : " << pos << endl;
  }
  else
  {
    cout << "Item Not found" << endl;
  }

  return 0;
}