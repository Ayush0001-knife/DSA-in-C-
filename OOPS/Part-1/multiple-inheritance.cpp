#include <iostream>
using namespace std;

class Teacher
{
public:
      int salary;
      string subject;
};

class Students
{
public:
      int rollNo;
      float cgpa;
};

class TA : public Teacher, public Students
{
public:
      string name;

      void showDetails()
      {
            cout << "Name: " << name << endl;
            cout << "Salary: " << salary << endl;
            cout << "Subject: " << subject << endl;
            cout << "Roll No: " << rollNo << endl;
            cout << "CGPA: " << cgpa << endl;
      }
};

int main()
{
      TA ta1;
      ta1.name = "Ayush";
      ta1.salary = 25000;
      ta1.subject = "Maths";
      ta1.rollNo = 1234567890;
      ta1.cgpa = 9.5;

      ta1.showDetails();

      return 0;
}