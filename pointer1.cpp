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
}