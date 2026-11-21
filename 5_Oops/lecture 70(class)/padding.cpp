#include <iostream>
using namespace std;

class a
{
  // char c;
  // char d;
  // int b; //8 byte

  // char c;
  // int b;
  // char d; // 12 byte

  // char c;
  // int b;
  // char d;
  // double e; // 24 byte

  char c;
  char d;
  int b;
  double e; // 16 byte
};

int main()
{
  a obj;
  cout << sizeof(obj) << " Byte" << endl;
}