#include <iostream>
using namespace std;

class Student
{
private: // access modifier
  string name;
  int age, roll_no;
  string grade;

  // function getter and setter
public:
  void setname(string n)
  {
    if(n.size()<3){
      cout<<"Invalid name"<<endl;
      return;
    }
    name = n;
  }
  void setage(int a)
  {
    if(age<0 || age>110){
      cout<<"Invalid age: ";
      return;
    }
    age = a;
  }
  void setroll(int r)
  {
    roll_no = r;
  }
  void setgrade(string g)
  {
    grade = g;
  }
  void printStudent()
  {
    cout << "{\n";
    cout << "  name: " << name << ",\n";
    cout << "  age: " << age << ",\n";
    cout << "  roll_no: " << roll_no << ",\n";
    cout << "  grade: " << grade << "\n";
    cout << "}\n";
  }
};

// void printStudent(Student s)
// {
//   cout << "{\n";
//   cout << "  name: " << s.name << ",\n";
//   cout << "  age: " << s.age << ",\n";
//   cout << "  roll_no: " << s.roll_no << ",\n";
//   cout << "  grade: " << s.grade << "\n";
//   cout << "}\n";
// }

int main()
{
  Student s1;
  // s1.name = "Aniket"; this used in public values
  // s1.age = 20;
  // s1.roll_no = 12;
  // s1.grade = "A+";
  s1.setage(25);
  s1.setname("Aniket");
  s1.setroll(19);
  s1.setgrade("A++");
  s1.printStudent();
  // printStudent(s1);
}