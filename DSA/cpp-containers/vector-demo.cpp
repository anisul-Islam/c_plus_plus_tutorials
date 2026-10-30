#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void print(const vector<int> &v)
{
  for (int value : v)
  {
    cout << value << " ";
  }
  cout << endl;
}

int main()
{
  // declaration and Initialization
  vector<int> empty;            // empty vector
  vector<int> a(5, 0);          // empty vector
  vector<int> v = {10, 20, 30}; // starting with values

  // access
  cout << v[0] << endl;
  cout << v.at(0) << endl;
  cout << v.front() << endl;
  cout << v.back() << endl;

  // size
  cout << "Size of the vector: " << v.size() << endl;

  // printing the vector
  cout << "Printing with Traditional Loop: ";
  for (int i = 0; i < v.size(); i++)
  {
    cout << v.at(i) << " ";
  }
  cout << endl;

  cout << "Printing with Range-based Loop: ";
  print(v);

  cout << "Printing with iterator: ";
  for (auto it = v.begin(); it != v.end(); ++it)
  {
    cout << *it << " ";
  }
  cout << endl;

  // Insertion
  v.push_back(1);
  v.insert(v.begin(), 8);
  v.insert(v.begin() + 2, 18);
  cout << "After insterting printing the vector: ";
  print(v);

  // update the vector
  v[0] = 99;
  v.at(0) = 29;
  cout << "After updating printing the vector: ";
  print(v);

  cout << "After multiplying all the elements of the vector by 2: ";
  for (int &x : v) // using the reference
  {
    x = x * 2;
    cout << x << " ";
  }
  cout << endl;

  cout << "After updating printing the vector: ";
  print(v);

  // deleting vector items
  v.pop_back();
  v.erase(v.begin());
  // v.erase(v.begin() + 2);
  // v.erase(v.begin(),v.begin() + 2);
  // v.clear();

  auto item = find(v.begin(), v.end(), 20);
  cout << *item << endl;
  if (item != v.end())
    v.erase(item);

  cout << "After deleting printing the vector: ";
  print(v);

  cout << "After reversing printing the vector: ";
  // reverse(v.begin(), v.end()); // in-place Spcae=>O(1), Time => O(n)
  vector<int> reverse_copy(v.rbegin(), v.rend()); // Out-place Spcae=>O(n), Time => O(n)
  print(reverse_copy);

  return 0;
}

// Vector => C++ dynamic Array, DSA, Leetcode
// Declaration, Initialization,
// Size => v.size()
// Access => v[index], v.at(index), v.front(), v.back()
// Print => for(need index), range-based for loop, iterator (v.begin(), it!=v.end(), ++it, *it)
// Insert => v.push_back(item), v.insert(v.begin(),item), v.insert(v.begin()+index,item)
// Update => v[index]=value, v.at(index)=value, iterator helps us to reference and change the original vector
// Delete => v.pop_back(), v.erase(v.begin()), v.erase(v.begin()+index), v.clear()
// find by value => find(v.begin(),v.end(), value)

// important functions => empty(), resize(n), v.reserve(n)

// passing vector to a function
// reverse a vector => v.reverse(v.begin(),v.end())