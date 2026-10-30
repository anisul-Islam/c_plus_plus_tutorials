#include <iostream>

using namespace std;

int main()
{
  // Frequncy Count Method
  array<int, 6> arr = {2, 5, 3, 2, 5, 2};

  // create frequncy array
  array<int, 10> freq = {0};
  for (int i = 0; i < arr.size(); i++)
  {
    freq[arr[i]]++;
  }

  int maxFrequncy = 0;
  int mostFrequntItem = arr[0];

  for (int i = 0; i < freq.size(); i++)
  {
    // 1. Find frequncy of each item
    // if (freq[i] > 0)
    // {
    //   cout << "Frequncy of " << i << " : " << freq[i] << endl;
    // }

    // 2. Find duplicate items
    // if (freq[i] > 1)
    // {
    //   cout << i << " Duplicates" << endl;
    // }

    // 3. Find uniqe items / exist exactly once
    // if (freq[i] == 1)
    // {
    //   cout << i << " Unique" << endl;
    // }

    // 4. exist exactly twice
    // if (freq[i] == 2)
    // {
    //   cout << i << " exists exactly twice" << endl;
    // }

    // 5. Find existance
    // if (freq[i] > 0)
    // {
    //   cout << i << " exists" << endl;
    // }

    // 6. find missing items
    // if (freq[i] == 0)
    // {
    //   cout << i << " missing" << endl;
    // }

    // 7. find most frequnt items
    if (freq[i] > maxFrequncy)
    {
      maxFrequncy = freq[i];
      mostFrequntItem = i;
    }

    // 8. Remove duplicate items
    }
  cout << mostFrequntItem << " exists: " << maxFrequncy << " times" << endl;

  return 0;
}