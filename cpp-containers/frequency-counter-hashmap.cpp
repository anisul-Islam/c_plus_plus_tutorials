#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
  array<int, 6> arr = {2, 5, 3, 5, 5, 2};
  unordered_map<int, int> freq;

  // frequncy count strategy using hashmap
  for (int i = 0; i < arr.size(); i++)
  {
    freq[arr[i]]++;
  }

  // printing the hashmap => 1. frequncy counting
  // for (auto item : freq)
  // {
  //   cout << item.first << " appears " << item.second << " times" << endl;
  // }

  // 2. find duplicate items
  // for (auto item : freq)
  // {
  //   if (item.second > 1)
  //   {
  //     cout << item.first << " Dupliactes " << endl;
  //   }
  // }

  // 3. find unique items
  // for (auto item : freq)
  // {
  //   if (item.second == 1)
  //   {
  //     cout << item.first << " Unique Item " << endl;
  //   }
  // }

  // 4. find items appears exactly twice
  // for (auto item : freq)
  // {
  //   if (item.second == 2)
  //   {
  //     cout << item.first << " appears exactly twice " << endl;
  //   }
  // }

  // 5. Find the most frequent item
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
  // cout << "MaxFrequency : " << maxFrequency << endl;

  // 6. Remove duplicates
  unordered_map<int, bool> seen;

  // frequncy count strategy using hashmap
  for (int i = 0; i < arr.size(); i++)
  {
    if (!seen[arr[i]])
    {
      cout << arr[i] << " ";
      seen[arr[i]] = true;
    }
  }
  // for (auto item : seen)
  // {
  //   cout << item.first << " " << item.second << endl;
  // }

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