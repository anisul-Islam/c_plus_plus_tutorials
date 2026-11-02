#include <iostream>

using namespace std;

int main()
{
  // switch fallthrough and initializer

  switch (int r=10%3 r ) 
  {
  case 3:
    cout << "gold\n";
    [[fallthrough]];
  case 2:
    cout << "silver\n";
    [[fallthrough]];
  case 1:
    cout << "bronze\n";
  }
  return 0;
}