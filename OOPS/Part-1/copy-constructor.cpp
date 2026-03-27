#include <iostream>
using namespace std;

class Car
{
public:
      string name;
      string color;

      Car(string name, string color)
      {
            this->name = name;
            this->color = color;
      }
};

int main()
{
      Car c1("Fortuner", "White");

      Car c2(c1); // Here Automatically Copy constructor will be created by compiler and copy c1 values in c2.
      cout << c2.name << " and " << c2.color;

      return 0;
}