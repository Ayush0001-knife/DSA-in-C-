#include <iostream>
using namespace std;

class Student // Class
{
      // Properties
      string name;
      float cgpa;

      // Methods
      void getPercentage()
      {
            cout << "CGPA is : " << (cgpa * 10) << endl;
      }
};

int main()
{
      Student s1; //  Object

      cout << sizeof(s1);

      return 0;
}