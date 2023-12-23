#include <iostream>
using namespace std;
class complex;
class calculator
{
public:
    int returnRealSum(complex o1, complex o2);
    int returnImagSum(complex o1, complex o2);
};
class complex
{
    int real, imag;

public:
    complex() {}
    complex(int real, int imag) : real(real), imag(imag) {}
    friend int calculator::returnRealSum(complex, complex);
    friend int calculator::returnImagSum(complex, complex);
};
int calculator::returnRealSum(complex o1, complex o2)
{
    return (o1.real + o2.real);
}
int calculator::returnImagSum(complex o1, complex o2)
{
    return (o1.imag + o2.imag);
}
int main()
{
    complex o1, o2;
    o1 = complex(1, 2);
    o2 = complex(4, 5);
    calculator calc;
    int resR, resI;
    resR = calc.returnRealSum(o1, o2);
    resI = calc.returnImagSum(o1, o2);
    cout << "The sum of real part is " << resR << endl;
    cout << "The sum of real part is " << resI << endl;
    return 0;
}