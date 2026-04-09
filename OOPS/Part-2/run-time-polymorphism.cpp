#include <iostream>
using namespace std;

// Function Overriding
class Parent1
{
public:
      void show()
      {
            cout << "Parent" << endl;
      }
      virtual void hello()
      {
            cout << "Hello World" << endl;
      }
};
class Child1 : public Parent1
{
public:
      void show()
      {
            cout << "Child" << endl;
      }
};

// Virtual Function
class Parent2
{
public:
      virtual void hello()
      {
            cout << "Parent Saying Hello World" << endl;
      }
};

class Child2 : public Parent2
{
public:
      void hello()
      {
            cout << "Child2 Saying Hello World" << endl;
      }
};

int main()
{
      Child1 Obj;
      Obj.show();

      Parent2 *ptr; // Pointer to Parent
      Child2 Obj2;  // Object of Child2
      ptr = &Obj2;  // Pointer points to the object of Child2 This is called binding parent pointer to the child object or it is called Run Time Binding
      ptr->hello();

      return 0;
}