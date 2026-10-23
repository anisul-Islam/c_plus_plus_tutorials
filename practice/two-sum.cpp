/**
 * Leetcode Problem 1: Two Sum
 * Input =>{4,5,2,3,8}
 * Target => 10
 * return {2,4} or {4,2}
 *
 * two loops, take 1 number and check all combinations O(n^2)
 *
 * */

/*
#include <iostream>
#include <vector>

using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
  int steps = 0;
  for (int i = 0; i < nums.size(); i++)
  {
    // reduce the number of steps
    if (nums[i] > target)
    {
      continue;
    }
    for (int j = i + 1; j < nums.size(); j++)
    {
      steps++;
      printf("steps : %d\n", steps);
      if (nums[i] + nums[j] == target)
      {
        return {i, j};
      }
    }
  }

  return {};
}

int main()
{
  vector<int> numbers = {14, 5, 2, 3, 8};
  int target = 10;
  vector<int> result = twoSum(numbers, target);
  cout << result[0] << "," << result[1] << endl;

  return 0;
}
  */

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> twoSum(vector<int> &numbers, int target)
{
  // {14, 5, 2, 3, 8}
  unordered_map<int, int> seen;

  for (int i = 0; i < numbers.size(); i++)
  {
    if (numbers[i] > target)
    {
      continue;
    }
    int complement = target - numbers[i];
    if (seen.count(complement))
    {
      return {seen[complement], i};
    }
    seen[numbers[i]] = i;
  }
  return {};
}

int main()
{
  // Your code here
  vector<int> nums = {15, 7, 11, 2};
  vector<int> result = twoSum(nums, 9);
  cout << result[0] << "," << result[1] << endl;

  return 0;
}