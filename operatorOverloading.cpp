#include <iostream>
using namespace std;
class complex
{
    // friend ostream operator<<(complex &);
    // friend ostream operator<<(ostream&,complex&);
public:
    int real, imag;
    complex();
    complex(int, int);
    void print();
    complex operator+(complex c);
};
complex::complex() {}
complex::complex(int r, int i) : real(r), imag(i) {}
void complex::print()
{
    cout << real << " + " << imag << "i" << endl;
}
complex complex::operator+(complex c)
{
    complex temp;
    temp.real = real + c.real;
    temp.imag = imag + c.imag;
    return temp;
}
ostream &operator<<(ostream &Cout, complex c)
{
    Cout << c.real << " + " << c.imag << "i" << endl;
    return Cout;
}
// void operator<<(ostream &Cout, complex c)
// {
//     Cout << c.real << " + " << c.imag<<"i" << endl;
// }

int main()
{
    complex c1(1, 2), c2(2, 1), c3(3, 4), c4;
    c4 = c1 + c2 + c3;
    // / c4.print();
    cout << c4;
    return 0;
}