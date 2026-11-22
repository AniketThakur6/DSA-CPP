#include <iostream>
using namespace std;

class Engineer
{
public:
  string specilization;

  Engineer()
  {
    cout <<"Enginner constuctor" << endl;
  }

  void work()
  {
    cout << "I have specilization in : " << specilization << endl;
  }
};

class Youtuber
{
public:
  int subs;

  Youtuber()
  {
    cout << "Youtuber constuctor" << endl;
  }

  void contentCreator()
  {
    cout << "I have a subs base of : " << subs << endl;
  }
};

// class CodeTeacher : public Engineer, public Youtuber // constructor call order depend on inheritance order
class CodeTeacher : public Youtuber, public Engineer 
{
public:
  string name;

  CodeTeacher(string name, string specilization, int subs)
  {
    this->name = name;
    this->specilization = specilization;
    this->subs = subs;
  }

  void showcase()
  {
    cout << endl<<name << " " << specilization << " " << subs << endl;
    work();
    contentCreator();
  }
};

int main()
{
  CodeTeacher A1("Aniket", "CSE", 49000);
  A1.showcase();
}