/*
    THIS IS THE FIRST PROGRAM OF
    C++, WHICH PRINT THE HELLO WORLD
POINTS & STEPS ==>
    ==>WE INCLUDE HEADER FILE NAME AS
    (iostream) TO PREFORM INPUT AND
    OUPUT OPERATIONS.
    ==>USE INCLUDE THE STANDARD NAMESPACE
    FOR SOME_REASON, THE REASON IS THAT
    WE ARE GOING TO USE INPUT AND OUPUT
    METHODS DEFINE IN THIS STANDARD.
    SO USE INCLUDED IT.
    ==>NEXT => WE HAVE A PROGRAM BODY FROM
    WHERE THE CONTROLLER STARTS TO READ
    THE PROGRAM.
    ==>THEN I SIMPLE (cout<<"") print the
    statement AND USE endl to break the line.
    ==>FOR THE SUCCESSFUL TERMINATION I RETURN
    THE (0) TO THE OPERATING SYSTEM FROM
    WHERE THE PROGRAM ACTUALLY STARTED ITS
    EXECUTION.
*/
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    cout << "Hello world" << endl;
    char name[20] = "Mohsin";
    char *p = name;
    cout << *p << endl;
    char nameCopy[20];
    strcpy(nameCopy, p);
    cout << name << endl;
    string s = nameCopy;
    cout << s << endl;
    char Name[20];
    int i;
    for (i = 0; Name[i] != '\0'; i++)
    {
        Name[i] = name[i];
    }
    Name[i] = '\0';
    cout << Name << endl;
    return 0;
}