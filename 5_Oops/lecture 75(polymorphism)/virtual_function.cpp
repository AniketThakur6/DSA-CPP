#include <iostream>
#include <vector>
using namespace std;

class Animal
{
public:
  // virtual void sound()
  // {
  //   cout << "Animal makes sound" << endl;
  // }

  virtual void sound()=0; // this is pure virtual function or abstract class you cant create obj of this Animal class in pure virtual function
};

class Dog : public Animal
{
public:
  void sound()
  {
    cout << "Dog barks" << endl;
  }

  void roti() // cant access this function if this function only present in derived class and it is decide on runtime
  {
    cout << "dog eat\n";
  }
};

class Cat : public Animal
{
public:
  void sound()
  {
    cout << "Meow\n";
  }
};

int main()
{
  // Animal *ptr;
  // ptr = new Dog;
  // ptr->sound();
  // ptr->roti();

  Animal *p;
  vector<Animal *> animals;

  animals.push_back(new Dog());
  animals.push_back(new Cat());
  // animals.push_back(new Animal());
  animals.push_back(new Dog());
  animals.push_back(new Cat());
  for (int i = 0; i < animals.size(); i++)
  {
    p = animals[i];
    p->sound();
  }
}