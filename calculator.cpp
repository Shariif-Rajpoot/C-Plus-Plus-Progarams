/*
PROGRAM TO BUILD THE SIMPLE CALCULATOR WITH C++.
NOTE =>
    ONE THINK WE NEED TO KEEP IN MIND THAT FOR MODULAS (%)
    OPERATOR WE HAVE TO TYPECAST THE FLOAT DATA TYPE TO
    INTEGER, BECAUSE WE NEVER EVER GET REMINDER IN POINTS.
    WE GET REMINDER ONLY THE INTEGER NUMBER NOT FLOATING
    POINT NUMBER.
    IF TRYING TO PERFORM THE MODULAS (%) OPERATION BY USING
    THE FLOAT THIS WILL RESULT IN SYNTAX ERROR. SO, TO AVOID
    THIS TYPECAST THE DATA
TYPECAST SYNTAX ==>
    float x = 2.22;
    cout << x << endl;
    cout << (int)x << endl;
    cout << int(x) << endl;
BY BOTH OF THESE WAYS WE SIMPLE TYPECAST DATA OF ANY TYPE,LIKE int,float, etc.
*/
#include <iostream>
using namespace std;
int main()
{
    float num1, num2, result;
    cout << "Enter two number's ==> ";
    cin >> num1 >> num2;
    result = num1 + num2;
    cout << "The sum of " << num1 << " and " << num2 << "            is ==> " << result << endl;
    result = num1 - num2;
    cout << "The subtraction of " << num1 << " and " << num2 << "    is ==> " << result << endl;
    result = num1 * num2;
    cout << "The multiplication of " << num1 << " and " << num2 << " is ==> " << result << endl;
    result = num1 / num2;
    cout << "The division of " << num1 << " and " << num2 << "       is ==> " << result << endl;
    result = (int)num1 % (int)num2;
    cout << "The reminder of " << num1 << " and " << num2 << "       is ==> " << result << endl;
    return 0;
}