#include <iostream>
using namespace std;

class Customer
{
  string name;
  int *data;

public:
  Customer()
  {
    name = "4";
    cout << "Constructor is: " << name << endl;
  }

  // Constructor
  // Customer()
  // {
  //   name="Aniket";
  //   data = new int;
  //   *data = 10;
  //   cout << "constructor is called\n";
  // }

  Customer(string name)
  {
    this->name = name;
    cout << "Constructor is: " << name << endl;
  }

  // Destructor is released dymanic allocated memory only
  // ~Customer()
  // {
  //   delete data; // only for understanding
  //   cout << "destructor is called\n";
  // }

  ~Customer()
  {
    cout << "Destructor is: " << name << endl;
  }
};

int main()
{
  Customer A1("1"), A2("2"), A3("3"); // in which order constructor & destructor is called

  Customer *A4 = new Customer;

  delete A4; // to free dynamic memory of A4 or call destructor for A4

  // in declared order
  // Constructor is: 1
  // Constructor is: 2
  // Constructor is: 3
  // Constructor is: 4
  
  // in reverse order
  // Destructor is: 4
  // Destructor is: 3
  // Destructor is: 2
  // Destructor is: 1
}