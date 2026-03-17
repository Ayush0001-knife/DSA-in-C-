#include <iostream>
using namespace std;

class Car
{
      string name;
      string color;

public:
      Car() // Non Parameterized Constructor
      {
            cout << "Constructor without parameters." << endl;
      }
      Car(string name, string color) // Parameterized Constructor
      {
            this->name = name;   // name = nameVal;
            this->color = color; // color = colorVal;
      }
      void Start()
      {
            cout << name << " Car Started!!" << endl;
      }
      void Stop()
      {
            cout << name << " Car Stopped!!" << endl;
      }
      void getDetails() // Getter to get Car Object details
      {
            cout << name << " is a " << color << " colored car" << endl;
      }
};

int main()
{
      Car c0;                      // It will Call Non Parameterized Constructor
      Car c1("Fortuner", "Black"); // It will Call Parameterized Constructor
      c1.getDetails();

      return 0;
}