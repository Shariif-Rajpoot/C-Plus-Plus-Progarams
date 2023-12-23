#include <iostream>
using namespace std;
int main()
{
    int array[] = {1, 2, 3, 4, 5};
    int *p = array;
    for (int i = 0; i < 5; i++)
    {
        cin >> i[p];
    }
    cout << endl
         << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << &p[i] << " ";
    }

    return 0;
}