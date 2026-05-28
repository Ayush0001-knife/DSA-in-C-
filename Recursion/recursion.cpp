#include <iostream>
using namespace std;

// recursive function - recursion -  this function has no base case
void func()
{
      cout << "Function Call ...... " << endl;
      func();
}

int main()
{
      return 0;
}