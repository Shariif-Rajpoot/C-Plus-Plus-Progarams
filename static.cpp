#include <iostream>
using namespace std;
class staticfunction
{
    static int count;
    int x;

public:
    static void setCount()
    {
        count++;
    }
    static void display()
    {
        cout << count << endl;
    }
};
int staticfunction::count;
int main()
{
    staticfunction s, s1, s2;
    staticfunction::setCount();
    staticfunction::setCount();
    staticfunction::setCount();
    staticfunction::display();
    s2.display();
    return 0;
}