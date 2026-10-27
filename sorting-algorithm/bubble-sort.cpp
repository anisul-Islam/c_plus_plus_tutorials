#include <iostream>

using namespace std;

int main()
{
  // bubble sort => check neighbhors => Swap/No Swap
  int arr[] = {5, 1, 4, 2, 8};
  int size = 5;

  for (int i = 0; i < size - 1; i++)
  {
    bool swapped = false;
    for (int j = 0; j < size - 1 - i; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
        swapped = true;
      }
    }
    if (!swapped)
      break;
  }

  cout << "After sorting : " << endl;
  for (auto value : arr)
  {
    cout << "  " << value;
  }

  return 0;
}