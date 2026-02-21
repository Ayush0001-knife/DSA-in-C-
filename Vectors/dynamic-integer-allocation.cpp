#include <iostream>
using namespace std;

void funcInt()
{
      int *ptr = new int;
      *ptr = 5;

      cout << *ptr;

      delete ptr;
}

int main()
{
      funcInt();

      return 0;
}