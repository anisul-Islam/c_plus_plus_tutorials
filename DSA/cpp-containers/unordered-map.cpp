#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
  unordered_map<int, int> marks;
  unordered_map<string, int> stock;

  // insertion
  marks[12] = 85;
  marks[10] = 65;
  stock["apple"] = 5;
  stock["orange"] = 9;
  stock["mango"] = 19;

  // printing stock hashmap
  // cout << "Number of apple in our stock: " << stock["apple"] << endl;
  // stock["apple"] = stock["apple"] + 2; // stock["apple"] +=2
  // cout << "Number of apple in our stock: " << stock["apple"] << endl;

  // // print
  // cout << "Student Roll number with 12 got " << marks[12] << " Marks." << endl;
  cout << "Key" << " " << "\tValue" << endl;
  for (auto studentInfo : marks)
  // marks = {12=>85}, {10=>65}
  {
    cout << studentInfo.first << " \t" << studentInfo.second << endl;
  }

  // // update
  // marks[12] = 95;
  // cout << "After Update: Student Roll number with 12 got " << marks[12] << " Marks." << endl;

  // key exist=> count(k) c++11, find(k) c++11, contains(k) c++20
  // yes/no
  // true/false
  // 1/0
  cout << "Before deletion key 12 is : ";
  // if (marks.count(12))
  // if (marks.contains(12))
  // if (marks.contains(12))
  // {
  //   cout << "Found" << endl;
  // }
  // else
  // {
  //   cout << "Not Found" << endl;
  // }

  auto it = marks.find(12);
  if (it != marks.end())
  {
    cout << "Found value is " << it->second << endl;
  }
  else
  {
    cout << "Key Not Found." << endl;
  }

  // // Deletion
  // marks.erase(12);
  // cout << "After deletion key 12 is : ";
  // if (marks.count(12))
  // {
  //   cout << "Found" << endl;
  // }
  // else
  // {
  //   cout << "Not Found" << endl;
  // }

  return 0;
}

// Two Sum {2,7,11,15} target=9
// Frequncy counting "apple"