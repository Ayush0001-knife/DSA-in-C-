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

int main()
{
      counter2();
      counter2();
      counter2();

      return 0;
}