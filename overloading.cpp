#include <iostream>
using namespace std;
void display(int a)
{
    cout << "Int" << endl;
    cout << a << endl;
}
void display(float a)
{
    cout << "Float" << endl;
    cout << a << endl;
}
void display(double a)
{
    cout << "Double" << endl;
    cout << a << endl;
}
void add(int x, float y)
{
    cout << "Int + float" << endl;
    cout << "Addition => " << x + y << endl;
}
// void add(float x, int y)
// {
//     cout << "float + int" << endl;
//     cout << "Addition => " << x + y << endl;
// }
int main()
{
    int x = 2;
    float y = 3.22f;
    double z = 23.2222;
    display(z);
    add(x, y);
    add(z, x);
    return 0;
}