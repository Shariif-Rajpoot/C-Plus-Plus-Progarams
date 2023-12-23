#include <iostream>
using namespace std;
class number
{
    float num;
    int res;

public:
    number()
    {
        cout << "Enter the number " << endl;
        cin >> num;
    }
    void checkNum();
    void checkSign();
    int factorial();
    void display();
};
void number::checkNum()
{
    if (num < 0)
    {
        cout << num << " is not whole number " << endl;
    }
    else
    {
        cout << num << " is whole number " << endl;
    }
}
void number::checkSign()
{
    if (num < 0)
    {
        cout << num << " is negative " << endl;
        num *= -1;
    }
    else
    {
        cout << num << " is positive " << endl;
    }
}
int number ::factorial()
{
    res = 1;
    for (int i = num; i > 0; i--)
    {
        res *= i;
    }
    return res;
}
void number ::display()
{
    cout << "The number " << num << " has the factorial ==> " << factorial() << endl;
}
int main()
{
    number num;
    num.checkNum();
    num.checkSign();
    num.factorial();
    num.display();
    return 0;
}