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

class Bird : public Animal
{
public:
      void fly()
      {
            cout << "Flying" << endl;
      }
};

class Fish : public Animal
{
public:
      void swim()
      {
            cout << "Swimming" << endl;
      }
};

class Mammal : public Animal
{
public:
      void walk()
      {
            cout << "Walking" << endl;
      }
};

int main()
{
      Bird b1;
      b1.fly();
      b1.eat();
      b1.breathe();

      Fish f1;
      f1.swim();
      f1.eat();
      f1.breathe();

      Mammal m1;
      m1.walk();
      m1.eat();
      m1.breathe();

      return 0;
}