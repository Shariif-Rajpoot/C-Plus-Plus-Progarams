#include <iostream>
using namespace std;
class Base_1
{
    int a;

public:
    Base_1(int i) : a(i) { cout << "First constructor" << endl; }
    void getData()
    {
        cout << "A => " << a << endl;
    }
};
class Base_2
{
    int b;

public:
    Base_2(int i) : b(i) { cout << "Second constructor" << endl; }
    void getData()
    {
        cout << "B => " << b << endl;
    }
};
class Derived : public Base_1, public Base_2
{
    int c, d;

public:
    Derived(int a, int b, int c, int d) : Base_1(a), Base_2(b)
    {
        this->c = c;
        this->d = d;
        cout << "Third constructor called" << endl;
    }
    void getData()
    {
        Base_1::getData();
        Base_2::getData();
        cout << "C => " << c << endl;
        cout << "D => " << d << endl;
    }
};
int main()
{
    Derived d1(1, 2, 3, 4);
    d1.getData();
    return 0;
}