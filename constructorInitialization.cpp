#include <iostream>
using namespace std;
class test
{
    int a;
    int b;

public:
    test() {}
    // test(int i, int j) : a(i), b(j)
    // test(int i, int j) : a(i), b(i + j)
    // test(int i, int j) : a(i), b(a + j)
    // test(int i, int j) : a(i), b(a * j)
    // test(int i, int j) : b(j), a(i + b) --> (red flag)
    /*ORDER MATTERS THE MOST TO INITIALIZE VARIABLES*/
    test(int i, int j)
    {
        b = (j + i);
        a = i;
        cout << "A => " << a << endl;
        cout << "B => " << b << endl;
    }
};
int main()
{
    test t1(1, 2);
    return 0;
}