#include <iostream>
#include <string>

int main()
{
  std::string name;
  int age;

  std::cout << "Enter your name and age: ";
  // This waits for you to type something in the terminal and press Enter
  std::cin >> name >> age;

  std::cout << "Hello, " << name << "! You are " << age << " years old.\n";

  return 0;
}