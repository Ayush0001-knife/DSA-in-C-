#include <iostream>
using namespace std;

class Shape
{
public:
      virtual void draw() // Pure Virtual Function    virtual functionName() = 0;
      {
            throw 0;
      };
};

int main()
{
      return 0;
}