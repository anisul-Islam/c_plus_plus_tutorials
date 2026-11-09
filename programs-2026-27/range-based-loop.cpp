#include <iostream>

using namespace std;

int main()
{
  int numbers[] = {10, 20, 30, 40, 50};

  // for (int i = 0; i < 5; i++)
  // {
  //   cout << numbers[i] << endl;
  // }

  // range-based for loop
  // for (int number : numbers)
  // {
  //   cout << number << endl;
  // }

  // int a[2][3] = {{1, 2, 3}, {4, 5, 6}};

  // for (int row = 0; row < 2; row++)
  // {
  //   for (int column = 0; column < 3; column++)
  //   {
  //     cout << " " << a[row][column];
  //   }
  //   cout << endl;
  // }

  // for (auto& row : a) // a = {{1, 2, 3}, {4, 5, 6}}
  // {
  //   for (int col : row) // row => {1, 2, 3}
  //   {
  //     cout << " " << col;
  //   }
  //   cout << endl;
  // }

  int marks[] = {72, 85, 64, 90, 58};

  int total = 0, highest = marks[0];
  for (int x : marks)
  {
    total = total + x;
    if (x > highest)
      highest = x;
  }
  cout << "total = " << total << ", highest = " << highest << endl;

  for (int &x : marks)
  {
    x += 5;
  }

  cout << "after bonus: ";
  for (int x : marks)
  {
    cout << "  " << x;
  }
  cout << endl;

  int i = 1;
  for (int x : marks)
  {
    cout << "Student " << i << ": " << x << endl;
    i++;
  }

  return 0;
}