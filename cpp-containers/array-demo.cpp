#include <iostream>
#include <algorithm>
#include <numeric>
#include <array>

using namespace std;

void printArray(const array<int, 5> &arr)
{
  for (int value : arr)
  {
    cout << value << " ";
  }
  cout << "\n";
}

int main()
{
  // declaration
  int numbers[] = {10, 20, 30, 40, 50};
  array<int, 5> a = {40, 20, 80, 10, 50};
  array<int, 5> items = {40, 20, 80, 10, 50};
  array<int, 5> originalArray = {40, 90, 20, 30, 56};
  array<int, 5> swapped_array;

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
  printArray(a);

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
  printArray(a);

  //  a.fill(0)
  a.fill(0);
  cout << "After fill: ";
  printArray(a);

  a[4] = 20;
  a.at(4) = 30;
  cout << a[4] << endl;

  // swapping the array
  swapped_array.swap(originalArray);
  cout << "Printing the array after swapping: " << endl;
  printArray(swapped_array);

  // finding the total
  int sum = accumulate(swapped_array.begin(), swapped_array.end(), 0);
  cout << "Sum of the original array: " << sum << endl;

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
// swap => a1.swap(a2)
// finding the total => accumulate(originalArray.begin(), originalArray.end(), 0);
// passing array to a function
// searching => Linear, Binary Search