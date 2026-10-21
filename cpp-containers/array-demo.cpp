#include <iostream>
#include <array>

using namespace std;

int main()
{
  // declaration
  int numbers[] = {10, 20, 30, 40, 50};
  array<int, 5> a = {40, 20, 80, 10, 50};
  array<int, 5> items = {40, 20, 80, 10, 50};

  // read elements
  cout << numbers[0] << "\n";
  cout << a[0] << "\n";
  // cout << a[5] << "\n";
  // cout << a.at(5) << "\n";
  cout << a[4] << "\n";
  cout << a.at(4) << "\n";

  // read size
  cout << "size of traditional array: " << sizeof(numbers) / sizeof(numbers[0]) << "\n";
  cout << "size of stl array: " << a.size() << "\n";

  // printing using traditional loop and range-based for loop
  cout << endl
       << "Printing with Traditional for loop: ";
  for (int i = 0; i < a.size(); i++)
  {
    cout << a[i] << " ";
  }
  cout << "\n";

  cout << "Printing with Range based for loop: ";
  // 10, 20, 30, 40, 50
  for (int value : a)
  {
    cout << value << " ";
  }
  cout << "\n";

  // front(), back(),
  cout << "Printing first and last item: " << a.front() << " " << a.back() << endl;

  // empty()
  if (a.empty())
  {
    cout << "arry is empty" << endl;
  }
  else
  {
    cout << "arry is not empty" << endl;
  }

  // after sorting
  sort(a.begin(), a.end());
  cout << "Sorted: ";
  for (int value : a)
  {
    cout << value << " ";
  }
  cout << endl;

  //  a.fill(0)
  a.fill(0);
  cout << "After fill: ";
  for (int value : a)
  {
    cout << value << " ";
  }
  cout << endl;

  a[4] = 20;
  a.at(4) = 30;
  cout << a[4] << endl;

  // Linear search
  int target = 40;
  for (int i = 0; i < items.size(); i++)
  {
    if (target == items.at(i))
    {
      cout << "Item found at " << i << endl;
      break;
    }
  }

  return 0;
}

// std:: array declaration, initialization
// access => index or array.at(index)
// update => index, array.at(index)
// size => array.size()
// printing ranged-based for loop
// array.front(), array.back()
// sort(array.begin(), array.end())
// array.empty(), array.fill()