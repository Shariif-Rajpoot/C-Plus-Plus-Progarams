// // Modified program using structures
// #include <stdio.h>
// struct greaterSmaller
// {
//     int greater, smaller;
// };

// typedef struct greaterSmaller Struct;

// Struct findGreaterSmaller(int a, int b)
// {
//     Struct s;
//     if (a > b)
//     {
//         s.greater = a;
//         s.smaller = b;
//     }
//     else
//     {
//         s.greater = b;
//         s.smaller = a;
//     }

//     return s;
// }

// // Driver code
// int main()
// {
//     int x, y;
//     Struct result;

//     printf("Enter two numbers: \n");
//     scanf("%d%d", &x, &y);

//     // The last two arguments are passed
//     // by giving addresses of memory locations
//     result = findGreaterSmaller(x, y);
//     printf("\nThe greater number is %d and the"
//            "smaller number is %d",
//            result.greater, result.smaller);

//     return 0;
// }
#include <iostream>
using namespace std;
class greaterSmaller
{
public:
    int min;
    int max;
};
greaterSmaller getMin_Max(int array[], int size)
{
    greaterSmaller getVal;
    getVal.max = array[0];
    getVal.min = array[0];
    for (int i = 0; i < size; i++)
    {
        if (array[i] > getVal.max)
        {
            getVal.max = array[i];
        }
        if (array[i] < getVal.min)
        {
            getVal.min = array[i];
        }
    }
    return getVal;
}
int main()
{
    greaterSmaller getNum;
    int array[]{-2, 29, 10, 11, 21};
    getNum = getMin_Max(array, 5);
    cout << "The max is " << getNum.max << endl;
    cout << "The min is " << getNum.min << endl;
    return 0;
}