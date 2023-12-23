#include <iostream>
using namespace std;
class test
{
    int a;
    int b;

public:
    test(int i, int j) : b(j)
    {
        a = b;
        cout << "A => " << a << endl;
        cout << "B => " << b << endl;
    }
};
int main()
{
    test t1(1, 2);
    return 0;
}