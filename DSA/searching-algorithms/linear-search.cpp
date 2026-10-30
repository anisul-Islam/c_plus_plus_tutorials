#include <iostream>

using namespace std;

int main()
{
  // Linear Search
  // Advantages and Disadvantages
  // Complexity => Time O(n), Space Complexity O(1)

  int arr[] = {7, 3, 9, 4, 1};
  int target = 11;
  int pos = -1;

  for (int i = 0; i < 5; i++)
  {
    if (arr[i] == target)
    {
      pos = i;
      break;
    }
  }

  if (pos != -1)
  {
    cout << "Item found at : " << pos << endl;
  }
  else
  {
    cout << "Item not found." << endl;
  }

  return 0;
}