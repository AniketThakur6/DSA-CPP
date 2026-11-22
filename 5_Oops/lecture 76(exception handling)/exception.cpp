#include <iostream>
using namespace std;

/**
 * 1st exception handle
 */

class Customer
{
  string name;
  int balance, acc;

public:
  Customer(string name, int acc, int balance)
  {
    this->name = name;
    this->acc = acc;
    this->balance = balance;
  }

  // deposit
  void deposit(int amount)
  {
    if (amount > 0)
    {
      balance += amount;
      cout << amount << " is credited successfully\n";
    }
    else
    {
      // throw "Amount is less than 1\n";
      throw runtime_error("Amount is less than 1\n");
    }
  }

  void withdraw(int amount)
  {
    if (amount > 0 && amount <= balance)
    {
      balance -= amount;
      cout << amount << " is debited is successfully";
    }
    else if (amount < 0)
    {
      // throw "amount should be greater than 0\n";
      throw runtime_error("amount should be greater than 0");
    }
    else
    {
      // throw "Your balance is low\n";
      throw runtime_error("Your balance is low\n");
    }
  }
};

int main()
{
  Customer C1("Aniket", 123, 100);
  try
  {
    C1.deposit(500);
    C1.withdraw(700);
    C1.deposit(100);
  }
  // catch (const char *e)
  catch (const runtime_error &e)
  {
    cout << "Exception Occured: " << e.what() << '\n';
  }
  catch (const bad_alloc &e)
  {
    cout << "Exception Occured: " << e.what() << '\n';
  }
  catch (...) // default catch
  {
    cout << "Exception Occured: " << '\n';
  }
}

/**
 * 2nd Exception handling
 */

// int main(){
//   int a,b;
//   cin>>a>>b;

//   try
//   {
//     if(b==0)
//     throw "Divied by 0 is not possible";
//   }
//   catch(const char *e)
//   {
//     cout<<"Exception Occured: "<< e << '\n';
//   }

//   int c = a/b;
//   cout<<c<<endl;
// }

/**
 * 3rd Exception Handling
 */

// int main()
// {

//   try
//   {
//     int *p = new int[100000000000];
//     cout<<"Memory allocation is Successfull\n";
//     delete []p;
//   }
//   catch (const exception &e)
//   {
//     cout<<"Exception Occured due to line 9: "<< e.what() << '\n';
//   }
// }