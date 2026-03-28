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

class User
{
      int id;
      string userName;
      string password;
      string bio;

      void deactivate()
      {
            cout << "User Deactivated!!";
      }

      string editBio(string newBio)
      {
            bio = newBio;

            return bio;
      }
};

int main()
{
      Student s1; //  Object

      cout << sizeof(s1);

      return 0;
}