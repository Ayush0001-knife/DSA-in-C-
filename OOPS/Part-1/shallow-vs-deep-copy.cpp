#include <iostream>
using namespace std;

class Car
{
public:
      string name;
      string color;
      int *mileage;

      Car(string name, string color)
      {
            this->name = name;
            this->color = color;
            mileage = new int; // Dynamic Allocation
            *mileage = 12;
      }

      // Below is the example of Shallow copy constructor

      Car(Car &original)
      {
            cout << "Copying .... \n";
            name = original.name;
            color = original.color;
            mileage = original.mileage;
      }

      // Below is the example of Deep copy constructor

      // Car(Car &original)
      // {
      //       cout << "Copying .... \n";
      //       name = original.name;
      //       color = original.color;
      //       mileage = new int; // Dynamic Allocation
      //       *mileage = *original.mileage;
      // }
};

int main()
{
      Car c1("Fortuner", "White");

      Car c2(c1); // Here Automatically Copy constructor will be created by compiler and copy c1 values in c2.
      cout << c2.name << " and " << c2.color << " and " << *c2.mileage << endl;
      ;
      *c2.mileage = 10;

      cout << *c1.mileage;

      return 0;
}