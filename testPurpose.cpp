/*
 ==> IN THIS SIMPLE C++ PROGRAM WE SEE THE USE OF
sizeof(arg) METHOD, THROUGH WE GET THE SIZE
OF USER DEFINED, DRIVE, AND ALSO BUILD IN
DATA TYPES.
 ==> WE SEE THAT BY DEFAULT THE FLOATING POINT
 NUMBER'S ARE CONSIDER DOUBLE IN C++, TO
 CONVERT THEM TO FLOAT OR LONG DOUBLE WE
 HAVE TO WRITE f,F FOR FLOAT , l,L FOR LONG
 DOUBLE IN FRONT OF NUMBER AS WE CAN SEE IN THE
 PROGRAM WRITTEN BLOW.
*/
#include <iostream>
using namespace std;
int main()
{
    float x;
    x = 23.3;
    char ch = 'a';
    cout << "The size of floating point is       ==> " << sizeof(x) << " byte " << endl;
    cout << "The size of 23.3 means float        ==> " << sizeof(23.3f) << " byte " << endl;
    cout << "The size of 23.3 means double       ==> " << sizeof(23.3) << " byte " << endl;
    cout << "The size of 23.3l means long double ==> " << sizeof(23.3l) << " byte " << endl;
    cout << "The size of integer is              ==> " << sizeof(int(x)) << " byte " << endl;
    cout << "The size of character is            ==> " << sizeof(ch) << " byte" << endl;
    return 0;
}