#include <iostream>
#include <print>
using namespace std;

int main()
{
  // auto and std::print() C++23

  auto num = 25;
  auto pi = 3.1416;
  auto ch = 'A';
  auto s = string("hi");

  cout << "Num: " << num << ",Pi: " << pi << ",Ch: " << ch << ",S: " << s << endl;

  print("Hello, C++23");
  println("I am Anisul Islam");
  println("Num : {}, Pi: {}, Char:{}", num, pi, ch);
  println("Pi: {:.2f}", pi);
  println("{} binary is: {:b} and hexadecimal is: {:#x}", num, num, num);
  println("[{:>6}] [{:<6}] [{:^6}]", 42, 42, 42);

  return 0;
}