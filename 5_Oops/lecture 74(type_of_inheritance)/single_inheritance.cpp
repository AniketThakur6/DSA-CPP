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
    cout << "Hello Human" << endl;
  }

  Human(string name,int age){
    this->name=name;
    this->age=age;
  }

  ~Human()
  {
    cout << "destructor Hello Human" << endl;
  }

  void work()
  {
    cout << "I am working\n";
  }

  void display()
  {
    cout << name << " " << age << " \n" ;
  }

};

class Student : public Human
{
  int roll, fees;

public:
  Student(string name, int age, int roll, int fees):Human(name,age) // this call Human constructor then it call Student constructor
  {
    // this->name = name;
    // this->age = age;
    this->roll = roll;
    this->fees = fees;
  }

  Student()
  {
    cout << "Hello Student" << endl;
  }

  ~Student()
  {
    cout << "destructor Hello Student" << endl;
  }

  void display()
  {
    cout << name << " " << age << " " << roll << " " << fees << endl;
  }

};

int main()
{
  Student s("aniket", 25, 19, 1000);
  Student S1; // calling order of constructor
  s.display();
  s.work();
}