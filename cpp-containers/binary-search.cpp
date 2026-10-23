#include <iostream>
#include <algorithm>

using namespace std;

int binarySearch(vector<int> &nums, int target)
{

  int left = 0;
  int right = nums.size() - 1;

  while (left <= right)
  {
    int mid = (left + right) / 2;
    if (nums[mid] == target)
    {
      return mid;
      break;
    }
    else if (target > nums[mid])
    {
      left = mid + 1;
    }
    else
    {
      right = right - 1;
    }
  }
  return -1;
}

void printStatus(int position)
{
  if (position != -1)
  {
    cout << "Item found at " << position << endl;
  }
  else
  {
    cout << "Item not found." << endl;
  }
}

int main()
{
  // Binary Search using stl array or vector
  // array<int, 6> nums = {10, 20, 30, 40, 50, 60};
  vector<int> nums = {10, 20, 30, 40, 50, 60};
  int target = 40;
  // int position = binarySearch(nums, target);
  // pirntStatus(position);

  // bool hasTarget = binary_search(nums.begin(), nums.end(), target);
  int position = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
  printStatus(position);

  return 0;
}