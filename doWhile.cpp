/*
    IN THIS PROGRAM, WE SEE THE BASIC FUNCTIONALITY
    OF DO WHILE LOOP AND CHECK THAT THE NUMBER ENTER
    BY THE USER IS PRIME NUMBER OR NOT.
    THE NEW THING ABOUT THIS LOOP
    IS THAT THIS LOOP WILL ITERATE AT LEAST EVEN
    THE CONDITION IS FALSE.
    ==> SYNTAX :
    INITIALIZATION;
    do
    {
        loop body;
        updation;
    }while(condition);
*/
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number ==> ";
    cin >> num;
    int counter = 0;
    int i = 2;
    do
    {
        if (num % i == 0)
        {
            counter++;
        }
        i++;
    } while (i <= num);
    if (counter == 1)
    {
        cout << "Prime number is ==> " << num << endl;
    }
    else
    {
        cout << "Number is not prime " << num << endl;
    }
    return 0;
}