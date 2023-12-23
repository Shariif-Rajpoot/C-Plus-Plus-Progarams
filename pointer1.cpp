<<<<<<< HEAD
#include <iostream>
using namespace std;
int x = 0;
int &display(int **P)
{
    cout << *P << endl;
    const int x = 1;
    return ::x;
}
int main()
{
    // int n = 10;
    // void *p = &n;
    // int *p1 = &n;
    // cout << (int *)p << endl;
    // cout << *((int *)p) << endl;
    // *((char *)p1) = 'c';
    // cout << *((char *)p1) << endl;
    int *p;
    int n = 1;
    p = &n;
    display(&p) = 2;
    cout << "The x is " << x << endl;
    return 0;
=======
// void pointers
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>
#include <list>
using namespace std;
void print(void *, char);
int main()
{
    int x = 20;
    float y = 20.55f;
    char c = 'm';
    bool t = true;
    print(&x, 'i');
    print(&t, 'b');
    print(&y, 'f');
    print(&c, 'c');
    return 0;
}
void print(void *ptr, char type)
{
    switch (type)
    {
    case 'i':
        cout << "The address is " << ptr << endl;
        cout << "The value is " << *((int *)ptr) << endl;
        cout << "The address is " << ((int *)ptr) << endl;
        break;
    case 'f':
        cout << "The address is " << ptr << endl;
        cout << "The value is " << *((float *)ptr) << endl;
        cout << "The address is " << ((int *)ptr) << endl;
        break;
    case 'b':
        cout << "The address is " << ptr << endl;
        cout << "The value is " << *((bool *)ptr) << endl;
        cout << "The address is " << ((int *)ptr) << endl;
        break;
    case 'c':
        cout << "The address is " << ptr << endl;
        cout << "The value is " << *((char *)ptr) << endl;
        cout << "The address is " << ((int *)ptr) << endl;
        break;
    }
>>>>>>> origin
}