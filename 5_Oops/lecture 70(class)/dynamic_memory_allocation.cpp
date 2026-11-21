#include <iostream>
using namespace std;

class Student
{
public:
  string name;
  int age;
  string grade;
};

int main()
{
  Student *S = new Student;
  (*S).name = "Aniket";
  (*S).age = 25;
  S->grade = "A+";

  cout<<S->name<<" ";
  cout<<S->age<<" ";
  cout<<S->grade<<" ";
  return 0;
}