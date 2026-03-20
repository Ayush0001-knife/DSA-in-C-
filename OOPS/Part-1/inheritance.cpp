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
            eat();
            breathe();
            cout << "Swiming" << endl;
      }
};

class Bear : protected Animal
{
public:
      int claws;

      void sleep()
      {
            cout << "Sleeping" << endl;
      }
};

class Bird : private Animal
{
public:
      int feathers;

      void Flying()
      {
            cout << "Flying" << endl;
      }
};

int main()
{
      Fish f1;
      f1.eat();
      f1.breathe();
      f1.swim();

      Bear b1;
      b1.sleep();
      b1.eat(); // It will give error

      Bird B2;
      B2.Flying();
      B2.eat(); // It will give error

      return 0;
}