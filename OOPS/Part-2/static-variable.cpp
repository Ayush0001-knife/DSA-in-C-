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

// class Example2
// {
// public:
//       static int x;
// };

// int Example2::x = 0;

int main()
{
      Example1 Obj1;
      Example1 Obj2;
      Example1 Obj3;

      cout << Obj1.x++ << endl;
      cout << Obj2.x++ << endl;
      cout << Obj3.x++ << endl;

      // Example1 Obj4;
      // Example1 Obj5;
      // Example1 Obj6;

      // cout << Obj4.x++ << endl;
      // cout << Obj5.x++ << endl;
      // cout << Obj6.x++ << endl;

      // counter1();
      // counter1();
      // counter1();

      // counter2();
      // counter2();
      // counter2();

      return 0;
}