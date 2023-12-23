/*
    IN THIS PROGRAM, WE SEE THE BASIC WORKING OF
    THE WHILE LOOP, HOW THIS LOOP ITERATES AND
    WE PRINT THE ODD NUMBERS AND EVEN NUMBERS
    THROUGH THIS LOOP.
    ==> THIS LOOP WORKS SAME AS THE FOR LOOP,
    BUT ONE DIFFERENCE IS THAT WE PREFER TO USE
    THIS LOOP IN THOSE CASE'S WHERE WE DON'T KNOW
    THAT HOW MANY TIMES LOOP WILL ITERATES.
    ==> SYNTAX :
    INITIALIZATION;
    while(CONDITION)
    {
        CODE;
        INCREMENT/DECREMENT;
    }
    => THIS LOOP WILL BREAK AUTOMATICALLY WHEN THE
    CONDITION BECOME THE FALSE.
*/
#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    while (i <= 10)
    {
        if (((i % 2) + 2) == 2)
        {
            cout << "Even Number " << i << endl;
        }
        else
        {
            cout << "Odd Number " << i << endl;
        }
        i++;
    }
    return 0;
}