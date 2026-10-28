#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

// 1. Frequency counting
// 2. Finding duplicate elements
// 3. Finding unique elements
// 4. Removing duplicates
// 5. Finding a missing element
// 6. Finding the most frequent element
// 7. Finding elements that appear exactly twice
int main()
{
  array<int, 6> arr = {2, 5, 3, 2, 5, 2};
  // unordered_map<int, int> freq;

  // creating frequncy hashmap
  // for (int i = 0; i < arr.size(); i++)
  // {
  //   freq[arr[i]]++;
  // }

  // printing hashmap =>  1. Frequency counting
  // cout << "Key" << "\tValue" << endl;
  // for (auto item : freq)
  // {
  //   // cout << f.first << "\t" << f.second << endl;
  //   cout << item.first << " appears " << item.second << " times" << endl;
  // }

  // 2. Finding duplicate elements
  // cout << "Duplicate Items: ";
  // for (auto item : freq)
  // {
  //   if (item.second > 1)
  //   {
  //     cout << item.first << " ";
  //   }
  // }
  // cout << endl;

  // 3. Finding unique elements
  // cout << "Unique Items: ";
  // for (auto item : freq)
  // {
  //   if (item.second == 1)
  //   {
  //     cout << item.first << " ";
  //   }
  // }
  // cout << endl;

  // 7. Finding elements that appear exactly twice
  // cout << "Elements that appear exactly twice: ";
  // for (auto item : freq)
  // {
  //   if (item.second == 2)
  //   {
  //     cout << item.first << " ";
  //   }
  // }
  // cout << endl;

  // 6. Finding the most frequent element
  // int maxFrequency = 0;
  // int mostFrequentItem = arr[0];
  // for (auto item : freq)
  // {
  //   if (item.second > maxFrequency)
  //   {
  //     maxFrequency = item.second;
  //     mostFrequentItem = item.first;
  //   }
  // }
  // cout << "Most Frequent Item : " << mostFrequentItem << endl;
  // cout << "Max Frequency : " << maxFrequency << endl;

  // 4. Removing duplicates
  // creating frequncy hashmap
  // unordered_map<int, int> freq;

  // for (int i = 0; i < arr.size(); i++)
  // {
  //   if (!freq.contains(arr[i]))
  //   {
  //     freq[arr[i]]++;
  //   }
  // }

  // for (auto item : freq)
  // {
  //   cout << item.first << "  ";
  // }

  unordered_map<int, bool> seen;

  for (int i = 0; i < arr.size(); i++)
  {
    if (!seen(arr[i]))
    {
      cout << arr[i] << " ";
      seen[arr[i]] = true;
    }
  }

  for (auto item : freq)
  {
    cout << item.first << "  ";
  }

  return 0;
}

/*
Your practice checklist

1. Contains Duplicate
2. Majority Element
3. Valid Anagram
4. First Unique Character
5. Intersection of Two Arrays II
6. Two Sum
7. Top K Frequent Elements
8. Group Anagrams
9. Subarray Sum Equals K
*/