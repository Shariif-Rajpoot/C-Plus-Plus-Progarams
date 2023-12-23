/*
 HERE IN THIS PROGRAM WE SEE THE BASIC FUNCTIONALITY
 OF THE DESTRUCTORS HOW THEY WORK AND WHEN AND HOW THEY
 INVOKE, TO SEE THE IMPLEMENTATION READ THE OBJECT AND
 ALSO MAKE POSSIBLE OVERVIEW OF THE CODE, THEN WILL
 BE ABLE TO GET THE MAIN POINT ABOUT THE WORKING OF THE
 DESTRUCTORS.
*/
#include <iostream>
using namespace std;
class test
{
    static int count;

public:
    test()
    {
        count++;
        cout << "This is the time when constructor is called for the object number ==> " << count << endl;
    }
    ~test()
    {
        cout << "This is the time when destructor is called for the object number ==> " << count << endl;
        count--;
    }
};
int test ::count = 0;
int main()
{
    cout << endl;
    cout << "\t\tEntering in the main " << endl;
    test t1;
    {
        cout << endl;
        cout << "Entering in the block " << endl;
        test t2, t3;
        cout << "\t\tExiting the block " << endl;
    }
    cout << "Welcome again to the main function " << endl;
    return 0;
}