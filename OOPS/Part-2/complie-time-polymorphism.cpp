#include <iostream>
using namespace std;

class Print
{
public:
      void show(int num)
      {
            cout << num << endl;
      }

      void show(string str)
      {
            cout << str << endl;
      }
};

int main()
{
      Print Obj;

      Obj.show(10);
      Obj.show("Hello World");

      return 0;
}