#include <iostream>
using namespace std;

class Student
{
private:
      string name;

public:
      float cgpa;
      void getPercentage()
      {
            cout << "Percentage is : " << cgpa * 10;
      }
};

int main()
{
      Student s1;
      // s1.name = "Ayush";           // It will give error becuase name is private
      s1.cgpa = 9.0;
      cout << "CGPA is : " << s1.cgpa << endl;

      s1.getPercentage();

      return 0;
}