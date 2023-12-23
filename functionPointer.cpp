#include <iostream>
using namespace std;
int sum(int a, int b)
{
    return a + b;
}
void display(int (*funcPtr)(int, int));
int main()
{
    int (*funcPtr)(int, int) = sum;
    display(funcPtr);
    return 0;
}
void display(int (*funcPtr)(int, int))
{
    cout << "The sum is " << funcPtr(1, 2) << endl;
}