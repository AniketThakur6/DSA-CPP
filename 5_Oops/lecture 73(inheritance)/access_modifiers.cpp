
#include <iostream>
using namespace std;

class Human
{
public:
  string name = "Aniket";

protected:
  int age = 25;

private:
  int weight = 75;
};

// 1. Public inheritance
class PublicStudent : public Human
{
public:
  void display()
  {
    cout << "\n--- Public Inheritance ---\n";

    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;

    // cout << weight; // Error: private in Human
  }
};

// 2. Protected inheritance
class ProtectedStudent : protected Human
{
public:
  void display()
  {
    cout << "\n--- Protected Inheritance ---\n";

    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;

    // cout << weight; // Error: private in Human
  }
};

// 3. Private inheritance
class PrivateStudent : private Human
{
public:
  void display()
  {
    cout << "\n--- Private Inheritance ---\n";

    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;

    // cout << weight; // Error: private in Human
  }
};

int main()
{

  PublicStudent p;
  ProtectedStudent pr;
  PrivateStudent pv;

  p.display();
  pr.display();
  pv.display();

  // Outside class access

  cout << "\n--- Outside Access ---\n";

  cout << p.name << endl; // Allowed

  // cout << p.age;         // Error: protected

  // cout << pr.name;       // Error: protected
  // cout << pr.age;        // Error: protected

  // cout << pv.name;       // Error: private
  // cout << pv.age;        // Error: private

  return 0;
}
