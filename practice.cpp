#include <iostream>
#include <vector>
using namespace std;

class Complex
{
    int real, imag;

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
    void operator-(Complex &c2)
    {
        int resReal = this->real - c2.real;
        int resImag = this->imag - c2.imag;

        Complex c3(resReal, resImag);
        cout << "Result: ";
        c3.showNum();
    }
};

int main()
{
    Complex c1(10, 20);
    Complex c2(30, 40);

    c1 - c2;

    return 0;
}
