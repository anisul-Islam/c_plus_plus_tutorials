#include <iostream>
#include <string>
using namespace std;

int main()
{
  // TODO 1: a const string called school, set with braces {}

  const string school{"Study with Anis Academy"};

  // TODO 2: declare name, age, height, classNo, section and studentId
  string name;
  int age;
  double height;
  unsigned short int classNo;
  char section;
  long long studentId; // 12 digits: needs long long

  // TODO 3: read the full name with getline
  cout << "Full name: ";
  getline(cin, name);

  // TODO 4: read age, height, class, section and student ID with cin >>
  cout << "Age: ";
  cin >> age;

  cout << "Height in meters: ";
  cin >> height;

  cout << "Class: ";
  cin >> classNo;

  cout << "Section: ";
  cin >> section;

  cout << "Student Id: ";
  cin >> studentId;

  // TODO 5: use auto to store age + 1 in nextAge
  auto nextAge = age + 1;

  // TODO 6: print the card. Use \t to line up the values
  cout << "\n+-------------------------------+\n";
  cout << " " << school << endl;
  cout << " STUDENT REGISTRATION CARD" << endl;
  cout << "\n+-------------------------------+\n";
  cout << "Name: \t\t" << name << endl;
  cout << "Age: \t\t" << age << "(next year : " << nextAge << ")" << endl;
  cout << "Height: \t" << height << endl;
  cout << "Class: \t\t" << classNo << " " << section << endl;
  cout << "Student ID: \t" << studentId << endl;
  cout << "\n+-------------------------------+\n";

  return 0;
}