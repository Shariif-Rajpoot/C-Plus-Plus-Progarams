/*
    IN THIS PROGRAM WE PRINT THE FIRST TEN NATURAL
    NUMBERS BY USING THE FOR LOOP,
    BASIC SYNTAX ==>
    for(INITIALIZATION;CONDITION;INCREMENT/DECREMENT)
    {
        BODY;
    }
    => FOR LOOP INITIALIZE ONLY ONE TIME.
    AFTER THIS, CONTROL MOVE'S TO THE CONDITION PART,
    THEN IN BODY AND THEN TO THE UPDATION PART OR WE CAN SAY THAT
    MOVE TO THE INCREMENT AND DECREMENT PART. AFTER THIS
    COMPILER AGAIN READ THE CONDITION AND IF THE CONDITION
    IS TRUE THE CONTROL MOVE'S AGAIN INTO THE LOOP AND
    REPEAT THE SAME STEP'S AGAIN AND
    CONTINUE UNTIL THE CONDITION BECOME FALSE.
*/
#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 10; i++)
    {
        if (i == 10)
        {
            cout << i << endl;
        }
        else
        {
            cout << i << " , ";
        }
    }
    return 0;
}