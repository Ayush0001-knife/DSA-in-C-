#include <iostream>
using namespace std;

class Student
{
      string name;
      float cgpa;

public:
      void getPercentage()
      {
            cout << "Percentage is : " << (cgpa * 10) << endl;
      }

      // Setter for name
      void setName(string nameVal)
      {
            name = nameVal;
      }
      // Setter for cgpa
      void setCGPA(float cgpaVal)
      {
            cgpa = cgpaVal;
      }
      // Getter to get name
      string getName()
      {
            return name;
      }
      // Getter to get cgpa
      float getCGPA()
      {
            return cgpa;
      }
};

int main()
{
      Student s1;
      s1.setName("Ayush");
      s1.setCGPA(9.67);

      cout << "Cgpa of " << s1.getName() << " is " << s1.getCGPA() << endl;

      return 0;
}