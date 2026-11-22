#include <iostream>
using namespace std;

class Human
{
public:
  string name;

  void display()
  {
    cout << "My name is: " << name << endl;
  }
};

class Engineer : public virtual Human
{
public:
  string specilization;

  void work()
  {
    cout << "I have specilization in : " << specilization << endl;
  }
};

class Youtuber : public virtual Human // virtual is used to remove ambigous nature of multipath inheritance
{
public:
  int subs;

  void contentCreator()
  {
    cout << "I have a subs base of : " << subs << endl;
  }
};

// class CodeTeacher : public Engineer, public Youtuber // constructor call order depend on inheritance order
class CodeTeacher : public Youtuber, public Engineer
{
public:
  int salary;

  CodeTeacher(string name, string specilization, int subs, int salary)
  {
    this->name = name;
    this->specilization = specilization;
    this->subs = subs;
    this->salary = salary;
  }
};

int main()
{
  CodeTeacher A1("Aniket", "CSE", 49000, 100);
  A1.display();
}