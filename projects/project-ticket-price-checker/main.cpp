#include <iostream>
#include <print>
#include <string>
using namespace std;

int main()
{
  int age, day;
  char seat;

  // TODO 1: read age, day and seat with prompts
  cout << "Age: ";
  cin >> age;
  cout << "Day (1 = Mon ... 7 = Sun): ";
  cin >> day;
  cout << "Seat (R = Regular, P = Premium, V = VIP): ";
  cin >> seat;

  // TODO 2: if the age or day is invalid, print a message and return 1
  if (age < 0 || age > 120)
  {
    cout << "Invalid age" << endl;
    return 1;
  }
  if (day < 1 || day > 7)
  {
    cout << "Invalid day" << endl;
    return 1;
  }

  // TODO 3: switch on seat to set seatPrice and seatName
  //         (stack case 'r': and case 'R': together; use default for bad letters)
  int seatPrice = 0;
  string seatName;
  switch (seat)
  {
  case 'r':
  case 'R':
    seatPrice = 300;
    seatName = "Regular";
    break;

  case 'p':
  case 'P':
    seatPrice = 450;
    seatName = "Premium";
    break;

  case 'v':
  case 'V':
    seatPrice = 650;
    seatName = "VIP";
    break;

  default:
    cout << "Invalid seat type" << endl;
    return 1;
  }

  // TODO 4: else-if ladder to set group and discountPercent
  string group;
  int discountPercent = 0;
  if (age < 3)
  {
    group = "Baby (under 3)";
    discountPercent = 100;
  }
  else if (age <= 12)
  {
    group = "Child";
    discountPercent = 50;
  }
  else if (age <= 59)
  {
    group = "Adult";
    discountPercent = 0;
  }
  else
  {
    group = "Senior";
    discountPercent = 30;
  }

  // TODO 5: switch on day to set dayName
  string dayName;
  switch (day)
  {
  case 1:
    dayName = "Monday";
    break;
  case 2:
    dayName = "Tuesday";
    break;
  case 3:
    dayName = "Wednesday";
    break;
  case 4:
    dayName = "Thursday";
    break;
  case 5:
    dayName = "Friday";
    break;
  case 6:
    dayName = "Saturday";
    break;
  case 7:
    dayName = "Sunday";
    break;
  }

  // TODO 6: nested if
  //         weekend (day 6 or 7): weekendFee = 50, but not for babies
  //         weekday: seniors get discountPercent + 10
  int weekendFee = 0;
  if (day >= 6)
  {
    if (age >= 3)
    {
      weekendFee = 50;
    }
  }
  else
  {
    if (age >= 60)
    {
      discountPercent = discountPercent + 10;
    }
  }

  // TODO 7: discount = seatPrice * discountPercent / 100
  //         total = seatPrice - discount + weekendFee
  int discount = seatPrice * discountPercent / 100;
  int total = seatPrice - discount + weekendFee;

  // TODO 8: print the ticket like the sample output
  cout << "\n+------------------------------+\n";
  cout << " CINEMA TICKET\n";
  cout << "\n+------------------------------+\n";
  cout << " Day: " << dayName << endl;
  cout << " Seat: " << seatName << " (" << seatPrice << " taka)" << endl;
  cout << " Age group: " << group << endl;
  cout << " Discount: " << discountPercent << "% (-" << discount << " taka)" << endl;
  cout << " Weekend fee: " << weekendFee << " taka" << endl;
  cout << " Total: " << total << " taka" << endl;
  cout << "\n+------------------------------+\n";

  // TODO 9: find the saving, if saved > 0 print "You save ..."
  //         else print "Full price ticket. Enjoy the movie!"
  int saved = seatPrice + weekendFee - total;
  if (saved > 0)
  {
    println("You save {} taka today.", saved);
  }
  else
  {
    cout << "Full price ticket.Enjoy the movie !" << endl;
  }

  return 0;
}