#include <iostream>
using namespace std;

// complie time polymorphism
// operator Overloading

class Complex
{
  int real, img;

public:
  Complex()
  {
  }

  Complex(int real, int img)
  {
    this->real = real;
    this->img = img;
  }

  void display()
  {
    cout << real << " + " << img << "i" << endl;
  }

  Complex operator+(Complex &C)
  {
    Complex ans;
    ans.real = real + C.real;
    ans.img = img + C.img;
    return ans;
  }

  Complex operator-(Complex &C)
  {
    Complex ans;
    ans.real = real - C.real;
    ans.img = img - C.img;
    return ans;
  }
};

int main()
{

  Complex C1(3, 5);
  Complex C2(6, 7);

  Complex C3 = C1 + C2;
  Complex C4 = C1 - C2;
  C3.display();
  C4.display();
  return 0;
}