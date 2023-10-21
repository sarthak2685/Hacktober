#include <iostream>
using namespace std;

class Complex {
public:
    Complex(double real = 0.0, double imag = 0.0) : m_real(real), m_imag(imag) {}

    friend Complex operator()(double real, double imag);

private:
    double m_real;
    double m_imag;
};

Complex operator()(double real, double imag) {
    return Complex(real, imag);
}

int main() {
    Complex c1(3.0, 4.0);
    Complex c2 = c1(2.0, 1.0); // Invoke the overloaded () operator
    cout << "c2 = " << c2 << endl; // Output the result
    return 0;
}

