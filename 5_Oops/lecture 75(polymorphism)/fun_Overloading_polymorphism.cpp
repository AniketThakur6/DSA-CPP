#include <iostream>
using namespace std;

// complie time polymorphism
// function overloading

class Area
{
public:
  float calculateArea(int r) // area of circle
  {
    return 3.14 * r * r;
  }
  int calculateArea(int l, int b) // area of rectangle
  {
    return l * b;
  }
};

int main()
{
  Area A1;
  cout<<"Area of circle: "<<A1.calculateArea(5)<<endl;
  cout<<"Area of rectangle: "<<A1.calculateArea(5,2)<<endl;
}