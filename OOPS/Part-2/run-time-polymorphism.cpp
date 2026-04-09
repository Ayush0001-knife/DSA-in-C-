#include <iostream>
using namespace std;

class Parent
{
public:
      void show()
      {
            cout << "Parent" << endl;
      }
};

class Child : public Parent
{
public:
      void show()
      {
            cout << "Child" << endl;
      }
};

int main()
{
      Child Obj;
      Obj.show();

      return 0;
}