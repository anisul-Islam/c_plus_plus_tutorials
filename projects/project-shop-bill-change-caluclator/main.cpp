#include <iostream>
#include <iomanip>
#include <print>

using namespace std;

int main()
{

  double price;
  int quantity, discountPercent, paid;

  cout << "Unit Price: ";
  cin >> price;

  cout << "Quantity: ";
  cin >> quantity;

  cout << "Discount: ";
  cin >> discountPercent;

  cout << "Amount Paid: ";
  cin >> paid;

  // calculation
  double subTotal = price * quantity;
  double discount = subTotal * (discountPercent / 100.0);
  double afterDiscount = subTotal - discount;
  double vat = afterDiscount * (5 / 100.0);
  double total = afterDiscount + vat;
  int payable = (int)(total + 0.5);
  int change = paid - payable;

  cout
      << fixed << setprecision(2);
  cout << "\n----------- BILL -----------\n";
  cout << "Subtotal:\t" << subTotal << endl;
  cout << "Discount:\t -" << discount << endl;
  cout << "VAT 5%:\t\t" << vat << endl;
  cout << "Total:\t\t" << total << endl;
  cout << "Paybale:\t" << payable << " taka" << endl;
  cout << "Change:\t\t" << change << " taka" << endl;

  int n500 = change / 500;
  change %= 500;

  int n100 = change / 100;
  change %= 100;

  int n50 = change / 50;
  change %= 50;

  int n20 = change / 20;
  change %= 20;

  int n10 = change / 10;
  change %= 10;

  int n5 = change / 5;
  change %= 5;

  int n2 = change / 2;
  change %= 2;

  int n1 = change / 1;
  change %= 1;

  println("Notes : 500x{} 100x{} 50x{} 20x{} 10x{} 5x{} 2x{} 1x{}", n500, n100, n50, n20, n10, n5, n2, n1);

  int itemInBag = quantity;
  itemInBag++;
  cout << "Items in bag (with 1 free sample): " << itemInBag << endl;

  cout << boolalpha;
  cout << "Paid enough: " << (paid >= payable) << endl;
  cout << "Free delivery (1000 or more):" << (total >= 1000) << endl;
  cout << "Bulk order (10 or more): " << (quantity >= 10) << endl;

  return 0;
}