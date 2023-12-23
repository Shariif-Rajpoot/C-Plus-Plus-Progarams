#include <iostream>
using namespace std;
int main()
{
    int *ptr1, *ptr2;
    ptr1 = new int(10);
    ptr2 = new int(20);
    *(ptr1) = *(ptr2);
    cout << *ptr2 << endl;
    cout << *ptr1 << endl;
    delete ptr1;
    delete ptr2;
    ptr1 = nullptr;
    ptr2 = nullptr;
    return 0;
}