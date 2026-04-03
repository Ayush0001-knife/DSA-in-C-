#include <iostream>
using namespace std;

class Animal
{
public:
      string color;

      void eat()
      {
            cout << "Eating" << endl;
      }

      void breathe()
      {
            cout << "Breathing" << endl;
      }
};

class Fish : public Animal
{
public:
      int fins;

      void swim()
      {
            cout << "Swiming" << endl;
      }
};

int main()
{
      Animal a1;
      a1.breathe();
      a1.eat();

      Fish f1;
      f1.color = "silver";
      f1.eat();

      return 0;
}