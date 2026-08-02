#include <iostream>
#include <list>
#include <iterator>
using namespace std;

int main()
{
      list<int> myLL;

      myLL.push_front(1);
      myLL.push_back(2);
      myLL.push_back(3);

      list<int>::iterator itr;

      for (itr = myLL.begin(); itr != myLL.end(); itr++)
      {
            cout << *itr << " ";
      }

      return 0;
}