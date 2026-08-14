#include <iostream>
using namespace std;

class Complex
{
public:
    int real;
    int imaginary;

    // Default constructor
    Complex()
    {
        real = 0;
        imaginary = 0;
    }

    // Parameterized constructor
    Complex(int r, int i)
    {
        real = r;
        imaginary = i;
    }

    // Function to add two complex numbers
    Complex addComplexNumbers(Complex c1, Complex c2)
    {
        Complex res;
        res.real = c1.real + c2.real;
        res.imaginary = c1.imaginary + c2.imaginary;
        return res;
    }
};

int main()
{
    Complex c1(4, 50);
    cout << "Complex Number 1: " << c1.real << " + " << c1.imaginary << "i" << endl;

    Complex c2(4, 5);
    cout << "Complex Number 2: " << c2.real << " + " << c2.imaginary << "i" << endl;

    Complex c3;
    c3 = c3.addComplexNumbers(c1, c2);
    cout << "Sum: " << c3.real << " + " << c3.imaginary << "i" << endl;

    Complex A(2, 7);
    cout << "Complex Number 1: " << A.real << " + " << A.imaginary << "i" << endl;

    Complex B(12, 23);
    cout << "Complex Number 2: " << B.real << " + " << B.imaginary << "i" << endl;

    Complex C;
    C = C.addComplexNumbers(A, B);
    cout << "Sum: " << C.real << " + " << C.imaginary << "i" << endl;

    return 0;
}