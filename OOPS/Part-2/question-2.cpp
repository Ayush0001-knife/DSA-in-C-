#include <iostream>
using namespace std;

// Create a base class Person with attributes name and age.
// Derive a class Student from Person and add an additional attribute studentID.
// Implement a method displayStudentInfo( ) in the Student class to display all details.

class Person
{
public:
      string name;
      int age;
};

class Student : public Person
{
      int studentID;

public:
      Student(string n, int a, int id)
      {
            name = n;
            age = a;
            studentID = id;
      }
      void displayStudentInfo()
      {
            cout << "Name : " << name << endl;
            cout << "Age : " << age << endl;
            cout << "StudentID : " << studentID << endl;
      }
};

int main()
{
      Student s1("Ayush", 20, 2401789);
      s1.displayStudentInfo();

      return 0;
}