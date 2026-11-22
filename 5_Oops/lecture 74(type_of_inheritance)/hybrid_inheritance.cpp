#include <iostream>
using namespace std;

// student
// boy
// girl
// male
// female

class Student
{
public:
  void print()
  {
    cout << "I am student\n";
  }
};

class Male
{
public:
  void maleprint()
  {
    cout << "I am Male" << endl;
  }
};

class Female
{
public:
  void femaleprint()
  {
    cout << "I am Female" << endl;
  }
};

class Boys : public Student, public Male
{
public:
  void boyprint()
  {
    cout << "I am boy" << endl;
  }
};

class Girl : public Student, public Female
{
public:
  void girlprint()
  {
    cout << "I am girl" << endl;
  }
};

int main()
{
  Girl G1;
  G1.femaleprint();
  Boys B1;
  B1.boyprint();
}