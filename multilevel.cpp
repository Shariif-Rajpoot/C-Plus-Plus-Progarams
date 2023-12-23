#include <iostream>
using namespace std;
class base_1
{
protected:
    int num_1;

public:
    void set_num1();
    void get_num1();
};
void base_1::set_num1()
{
    cout << "Enter the number => ";
    cin >> num_1;
}
void base_1::get_num1()
{
    cout << "You enter the number => " << num_1 << endl;
}

class base_2
{
protected:
    int num_2;

public:
    void set_num2();
    void get_num2();
};
void base_2::set_num2()
{
    cout << "Enter the number => ";
    cin >> num_2;
}
void base_2::get_num2()
{
    cout << "You enter the number => " << num_2 << endl;
}

class derived : public base_1, public base_2
{
public:
    void calculateFactorial();
    void calculateProduct();
};
void derived::calculateFactorial()
{
    int fact = 1;
    for (int i = num_1; i > 0; i--)
        fact *= i;
    cout << "The factorial of " << num_1 << " is " << fact << endl;
}
void derived::calculateProduct()
{
    cout << num_1 << " * " << num_2 << " => " << num_1 * num_2 << endl;
}
int main()
{
    derived obj;
    obj.set_num1();
    obj.set_num2();
    obj.get_num1();
    obj.get_num2();
    obj.calculateFactorial();
    obj.calculateProduct();
    return 0;
}