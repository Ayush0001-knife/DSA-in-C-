#include <iostream>
#include <list>
using namespace std;

int main()
{
      list<int> myLL;

      myLL.push_front(1);
      myLL.push_back(2);
      myLL.push_back(3);

      cout << "Size of the linked list: " << myLL.size() << endl;
      cout << "Front: " << myLL.front() << ", Back: " << myLL.back() << endl;

      return 0;
}