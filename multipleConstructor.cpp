#include <iostream>
#include <cmath>
using namespace std;
class simpleCalculator
{
protected:
    int num1;
    int num2;

public:
    simpleCalculator() {}
    simpleCalculator(int, int);
    void performSimpleOperations();
};
simpleCalculator::simpleCalculator(int x, int y)
{
    num1 = x;
    num2 = y;
}
void simpleCalculator::performSimpleOperations()
{
    cout << endl
         << "\t\tSimple Operations" << endl;
    cout << num1 << " + " << num2 << " = " << (num1 + num2) << endl;
    cout << num1 << " - " << num2 << " = " << (num1 - num2) << endl;
    cout << num1 << " * " << num2 << " = " << (num1 * num2) << endl;
    cout << num1 << " / " << num2 << " = " << (num1 / num2) << endl;
}

class scientificCalculator
{
protected:
    int num1;
    int num2;

public:
    scientificCalculator() {}
    scientificCalculator(int, int);
    void performScientificOperations();
};
scientificCalculator::scientificCalculator(int x, int y)
{
    num1 = x;
    num2 = y;
}
void scientificCalculator::performScientificOperations()
{
    cout << endl
         << "\t\tScientific Operations" << endl;
    cout << "sin(" << num1 << ") = " << sin(num1) << endl;
    cout << "sin(" << num2 << ") = " << sin(num2) << endl;
    cout << "cos(" << num1 << ") = " << cos(num1) << endl;
    cout << "cos(" << num2 << ") = " << cos(num2) << endl;
}
class hybridCalculator : private simpleCalculator, private scientificCalculator
{
public:
    hybridCalculator() {}
    hybridCalculator(int w, int x, int y, int z) : simpleCalculator(w, x), scientificCalculator(y, z) {}
    void performOperations();
};
void hybridCalculator::performOperations()
{
    performSimpleOperations();
    performScientificOperations();
}
int main()
{
    hybridCalculator calc(6, 5, 4, 3);
    calc.performOperations();
    return 0;
}