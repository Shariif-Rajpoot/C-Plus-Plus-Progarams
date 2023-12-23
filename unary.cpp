#include <iostream>
using namespace std;
int getN(int x)
{
    return x++;
}
int getM(int x)
{
    return ++x;
}
class test
{
    int n;

public:
    test(int m)
    {
        n = m;
    }
    // void operator++()
    // {
    //     ++n;
    //     n++;
    // }
    // void operator++(int)
    // {
    //     n++;
    // }
    // void operator--()
    // {
    //     n--;
    //     --n;
    // }
    void operator--(int)
    {
        n--;
    }
    void display()
    {
        cout << "N => " << n << endl;
    }
};
int main()
{
    int n = 0;
    int m = 1;
    cout << getN(n) << endl;
    cout << getM(m) << endl;
    test t1(2);
    t1--;
    t1.display();
    return 0;
}