#include <iostream>
using namespace std;
class complex
{
    int real, imag;
    static int count;

public:
    complex();
    complex(int, int);
    void display();
    void setDataBySum(complex, complex);
    static int getCount()
    {
        return count;
    }
};
int complex::count;
complex::complex() { count++; }
complex::complex(int r, int i) : real(r), imag(i) {}
void complex::display()
{
    cout << real << "+" << imag << "i" << endl;
}
void complex::setDataBySum(complex obj1, complex obj2)
{
    real = obj1.real + obj2.real;
    imag = obj1.imag + obj2.imag;
}
int main()
{
    complex c1, c2, c3;
    c1 = complex(5, 6);
    c2 = complex(1, 2);
    c3.setDataBySum(c1, c2);
    complex c[] = {c1, c2, c3};
    for (int i = 0; i < (complex::getCount()); i++)
    {
        i[c].display();
    }
    return 0;
}