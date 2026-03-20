#include <iostream>
using namespace std;

class Animal
{
public:
      void eat()
      {
            cout << "Eating" << endl;
      }
      void breathe()
      {
            cout << "Breathing" << endl;
      }
};

class Mammal : public Animal
{
public:
      string bloodType = "Warm";
};

class Dog : public Mammal
{
public:
      void tailwang()
      {
            cout << "Wanging" << endl;
      }
};

int main()
{
      Animal a1;
      a1.eat();
      a1.breathe();

      Mammal m1;
      m1.eat();
      m1.breathe();

      Dog d1;
      d1.eat();
      d1.breathe();
      cout << d1.bloodType << endl;
      ;
      d1.tailwang();

      return 0;
}