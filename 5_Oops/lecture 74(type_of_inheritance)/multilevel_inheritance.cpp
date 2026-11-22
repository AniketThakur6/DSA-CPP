#include <iostream>
using namespace std;

class Person
{
protected:
  string name;

public:
  void intro()
  {
    cout << "Hello my name is: " << name << endl;
  }
};

class Employee : public Person
{
protected:
  int salary;

public:
  void monthy_salary()
  {
    cout << "My Monthly Salary is: " << salary << endl;
  }
};

class Manager : public Employee
{
public:
  string department;

  Manager(string name, int salary, string department)
  {
    this->name = name;
    this->salary = salary;
    this->department = department;
  }

  void work()
  {
    cout << "I am leading the department: " << department << endl;
  }
};

int main()
{
  Manager A1("Aniket", 100, "Finance");
  A1.work();
  A1.intro();
  A1.monthy_salary();
}