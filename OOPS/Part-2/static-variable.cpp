#include <iostream>
using namespace std;

void counter1() // Here on every call count variable will be created, incremented and printed and then all of the stack frame of this function will be destroyed
{
      int count = 0;
      count++;
      cout << "Count: " << count << endl;
}

void counter2() // Here in only first call count variable will be created, incremented and printed and then all of the stack frame of this function will be destroyed except the count variable it will store in memeory and on another call the first line of the function will not execute the other lines will execute
{
      static int count = 0;
      count++;
      cout << "Count: " << count << endl;
}

class Example1
{
public:
      int x = 0;
};

class Example2
{
public:
      static int x;
};
int Example2::x = 0;

class Example3
{
public:
      Example3()
      {
            cout << "Constructor called ...... " << endl;
      }
      ~Example3()
      {
            cout << "Destructor called ...... " << endl;
      }
};

int main()
{
      // Normal Function
      counter1();
      counter1();
      counter1();

      cout << endl;

      // Static Variable Function
      counter2();
      counter2();
      counter2();

      cout << endl;

      // Normal Class
      Example1 Obj1;
      Example1 Obj2;
      Example1 Obj3;

      cout << Obj1.x++ << endl;
      cout << Obj2.x++ << endl;
      cout << Obj3.x++ << endl;

      cout << endl;

      // Static Variable Class
      Example2 Obj4;
      Example2 Obj5;
      Example2 Obj6;

      cout << endl;

      cout << Obj4.x++ << endl;
      cout << Obj5.x++ << endl;
      cout << Obj6.x++ << endl;

      // Static Object Class
      int a = 0;

      if (a == 0)
      {
            Example3 obj1;
      }

      cout << endl;

      if (a == 0)
      {
            static Example3 obj2;
      }

      cout << "End of the Code " << endl;

      return 0;
}