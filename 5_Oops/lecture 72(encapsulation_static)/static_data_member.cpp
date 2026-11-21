#include <iostream>
using namespace std;

class Customer
{
  string name;
  int acc, balance;

  // static data decleared
  static int total_customer;

public:
  static int total_balance;

  // constructor
  Customer(string name, int acc, int balance)
  {
    this->name = name;
    this->acc = acc;
    this->balance = balance;
    total_balance += balance;
    total_customer++;
  }

  void display()
  {
    cout << name << " " << acc << " " << balance << endl;
  }

  void total()
  {
    cout << "total customer: " << total_customer << ", " << "total balanace: " << total_balance << endl;
  }
};

// static member init
int Customer::total_customer = 0;
int Customer::total_balance = 0;

int main()
{
  Customer A1("Aniket", 123, 1000);
  A1.display();
  Customer A2("Rohit", 152, 501);
  A2.display();
  A2.total();

  cout << "total balance: " << Customer::total_balance << endl; // this is how can you access if it in public section

  return 0;
}