#include <iostream>
using namespace std;

class Human
{
protected:
  string name;
  int age;

public:
  Human()
  {
  }

  Human(string name, int age)
  {
    this->name = name;
    this->age = age;
  }

  void display()
  {
    cout << name << " " << age << " \n";
  }
};

class Student : public Human
{
  int roll, fees;

public:
  Student(string name, int age, int roll, int fees) : Human(name, age) // this call Human constructor then it call Student constructor
  {
    this->roll = roll;
    this->fees = fees;
  }

  Student()
  {
    cout << "Hello Student" << endl;
  }

  void display()
  {
    cout << name << " " << age << " " << roll << " " << fees << endl;
  }
};

class Teacher : public Human
{
  int salary;

public:
  Teacher(string name, int age, int salary)
  {
    this->salary = salary;
    this->name = name;
    this->age = age;
  }

  void display()
  {
    cout << name << " " << age << " " << salary << endl;
  }
};

int main()
{
  Student s("aniket", 25, 19, 1000);
  // Student S1; // calling order of constructor
  s.display();

  cout << endl;

  Teacher T1("Rohit", 30, 10000);
  T1.display();
}