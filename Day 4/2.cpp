#include <iostream>
using namespace std;

class Complex
{
    int real, imag;

public:
    Complex(int r = 0, int i = 0) : real(r), imag(i) {}

    Complex operator+(const Complex &other)
    {
        return Complex(real + other.real, imag + other.imag);
    }

    Complex operator-(const Complex &other)
    {
        return Complex(real - other.real, imag - other.imag);
    }

    void display() const
    {
        cout << real << (imag >= 0 ? " + " : " - ") << abs(imag) << "i" << endl;
    }
};

int main()
{
    Complex c1(3, 4), c2(1, 2);

    cout << "Complex Number 1: ";
    c1.display();
    cout << "Complex Number 2: ";
    c2.display();

    cout << "Sum: ";
    (c1 + c2).display();
    cout << "Difference: ";
    (c1 - c2).display();

    return 0;
}
