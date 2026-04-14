#include <iostream>
using namespace std;

// abstract  class
class Shape
{
public:
      virtual void draw() = 0; // Abstract Function & Pure Virtual Function  =>   virtual functionName() = 0;
};

class Circle : public Shape
{
public:
      void draw()
      {
            cout << "Drawing Circle" << endl;
      }
};

class Rectangle : public Shape
{
public:
      void draw()
      {
            cout << "Drawing Rectangle" << endl;
      }
};

class Triangle : public Shape
{
public:
      void draw()
      {
            cout << "Drawing Triangle" << endl;
      }
};

int main()
{
      Circle Obj1;
      Obj1.draw();
      Rectangle Obj2;
      Obj2.draw();
      Triangle Obj3;
      Obj3.draw();

      // Shape s1;
      // s1.draw(); // It will give error

      return 0;
}