#include <iostream>
using namespace std;

class Car
{
      string name;
      string color;

public:
      Car(string nameVal, string colorVal) // Constructor created by me
      {
            name = nameVal;
            color = colorVal;
      };
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
      Car c1("Fortuner", "Black");
      c1.getDetails();

      return 0;
}