#include <iostream>
using namespace std;

// recursive function - recursion -  this function has no base case
void func()
{
      cout << "Function Call ...... " << endl;
      func();
}

// factorial using recursive function
int factorial(int n)
{
      if (n == 0)
      {
            return 1;
      }
      else
      {
            return n * factorial(n - 1);
      }
}

int main()
{
      cout << "Factorial of 5 is: " << factorial(5) << endl;
      return 0;
}