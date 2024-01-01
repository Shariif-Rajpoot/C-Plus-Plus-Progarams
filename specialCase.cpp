#include <iostream>
using namespace std;
class A
{
public:
    A() {}
    A(int a) : value(a){};
    int value;
    void display()
    {
        cout << value << endl;
    }
};
int main()
{
    A a;
    a.display();
    return 0;
}