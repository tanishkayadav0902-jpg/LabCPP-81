#include <iostream>
using namespace std;

class Complex {
private:
    int real, imag;

public:
    Complex(int r = 0, int i = 0) : real(r), imag(i) {}

    Complex add(Complex &c) {
        Complex T4;
        T4.real = real+c.real;
        T4.imag = imag+c.imag;
        real = T4.real;
        imag = T4.imag;
        return T4;
    }

    Complex subtract(const Complex &c) {
        return Complex(real - c.real, imag - c.imag);
    }

    void display() const {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    void c1(4, 5), c2(8, 9);

    c1.add(c2);
    c2.add(c1);
    c1.add(c1);
    c2.add(c2);

    Complex diff = c1.subtract(c2);

    cout << "First Complex Number: ";
    c1.display();

    cout << "Second Complex Number: ";
    c2.display();

    cout << "Addition: ";
    sum.display();

    cout << "Subtraction: ";
    diff.display();

    return 0;
}