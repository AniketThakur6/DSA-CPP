#include <iostream>
using namespace std;

class Customer
{
  string name;
  string acc_no;
  int balance;

public:
  // default Constructor
  Customer()
  {
    name = "Aniket";
    acc_no = "123";
    balance = 100;
  }

  // parameterized Constructor
  // Customer(string a, string b, int c)
  // {
  //   name = a;
  //   acc_no = b;
  //   balance = c;
  // }

  Customer(string name, string acc_no, int balance)
  {
    this->name = name;
    this->acc_no = acc_no;
    this->balance = balance;
  }

  // Constructor overloading
  Customer(string a, string b)
  {
    name = a;
    acc_no = b;
  }

  // Inline constructor
  inline Customer(string a, string b, int c, int random) : name(a), acc_no(b), balance(c)
  {
  }

  // copy constructor
  Customer(Customer &B) // & is must for copy constructor to work
  {
    name = B.name;
    acc_no = B.acc_no;
    balance = B.balance;
  }

  void display()
  {
    cout << name << " " << acc_no << " " << balance << endl;
  }

}; // semicolan is must at the end

int main()
{
  Customer A1;
  A1.display();
  Customer A2("Rohit", "152", 1000);
  A2.display();
  Customer A3("Mohit", "192");
  A3.display();
  Customer A4("Sohit", "169", 1232, 31);
  A4.display();
  Customer A5(A2);
  A5.display();
  Customer A6;
  A6 = A2;
  cout<<"A6"<<endl;
  A6.display();
  return 0;
}