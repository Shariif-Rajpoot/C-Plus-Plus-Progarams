#include <iostream>
using namespace std;
int main()
{
    int marks[4] = {22, 23, 24, 25};
    for (int i = 0; i < 4; i++)
    {
        cout << i[marks] << endl;
    }
    int *ptr;
    ptr = marks;
    cout << ptr << endl;
    cout << *ptr++ << endl;
    cout << *++ptr << endl;
    return 0;
}