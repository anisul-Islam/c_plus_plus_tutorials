#include <iostream>

using namespace std;

int main()
{
  // Linear search using array and vector
  // sorted and unsorted
  array<int, 5> numbers1 = {20, 10, 55, 50, 40};
  vector<int> numbers = {20, 10, 55, 50, 40};
  int target = 40;
  int position = -1;

  // manual way of linear search
  for (int i = 0; i < numbers.size(); i++)
  {
    if (numbers.at(i) == target)
    {
      position = i;
      break;
    }
  }

  if (position != -1)
  {
    cout << "Item found at : " << position << endl;
  }
  else
  {
    cout << "Item not found." << endl;
  }

  // stl
  auto it = find(numbers.begin(), numbers.end(), target);

  if (it != numbers.end())
  {
    cout << it - numbers.begin() << endl;
  }

  return 0;
}