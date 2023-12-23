#include <iostream>
using namespace std;
class base
{
protected:
    int num1;
    int num2;

public:
    void getData()
    {
        cout << "Enter the first number  => ";
        cin >> num1;
        cout << "Enter the second number => ";
        cin >> num2;
    }
};
class derived : private base
{
    int result;

public:
    void process();
    void display();
};
void derived::process()
{
    base::getData();
    result = num1 * num2;
}
void derived::display()
{
    cout << "The product ==> " << result << endl;
}
int main()
{
    derived d;
    // d.getData();INHERITED PRIVATELY
    d.process();
    d.display();
    return 0;
}