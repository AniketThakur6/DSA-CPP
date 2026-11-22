#include <iostream>
using namespace std;

class Human
{
  string religion, state;

protected:
  string name;
  int age, weight;
};

class Student : public Human // here access modifies changes the inherited variable access modifiers
{
  string grade;
  int fees;

  // religion & state cant be access in this class
public:
  Student(string name, int age, int weight, string grade, int fees)
  {
    this->name = name;
    this->age = age;
    this->weight = weight;
    this->grade = grade;
    this->fees = fees;
  }

  void display()
  {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Weight: " << weight << endl;
    cout << "Grade: " << grade << endl;
    cout << "Fees: " << fees << endl;
  }
};

int main()
{
  Student S1("Aniket",25,75,"A+",100);
  S1.display();
}