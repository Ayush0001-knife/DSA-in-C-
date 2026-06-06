#include <iostream>
using namespace std;

class A
{
      string secret = "Secret Code";
      friend class B;                   // Declaring class B as a friend of class A so that B can Access private members of A
      friend void revealSecret(A &obj); // Declaring the function revealSecret as a friend of class A so that it can Access private members of A
};

class B // Friend Class of A
{
public:
      void showSecret(A &obj)
      {
            cout << "The secret is: " << obj.secret << endl;
      }
};

void revealSecret(A &obj) // Friend Function of A
{
      cout << "The secret is: " << obj.secret << endl;
}

int main()
{
      A objA;
      B objB;
      objB.showSecret(objA);
      revealSecret(objA);

      return 0;
}