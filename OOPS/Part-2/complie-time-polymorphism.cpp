#include <iostream>
using namespace std;

// Function Overloading
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

// Operator Overloading

class Complex
{
      int real;
      int imag;

public:
      Complex(int r, int i)
      {
            real = r;
            imag = i;
      }
      void showNum()
      {
            cout << real << " + " << imag << "i" << endl;
      }
      // Operator Overloading Main logic
      void operator+(Complex &c2)
      {
            int resReal = this->real + c2.real;
            int resImag = this->imag + c2.imag;
            // cout << "Result: " << resReal << " + " << resImag << "i" << endl;
            // cout << endl;

            Complex c3(resReal, resImag);
            cout << "Result: ";
            c3.showNum();
      }
};

int main()
{
      // Function Overloading
      // Print Obj;
      // Obj.show(10);
      // Obj.show("Hello World");

      // Operator Overloading
      Complex c1(10, 20);
      Complex c2(30, 40);

      c1.showNum();
      c2.showNum();
      c1 + c2;

      return 0;
}