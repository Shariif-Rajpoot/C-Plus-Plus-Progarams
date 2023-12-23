/*
    HERE IN THIS WE SEE THE BASIC FUNCTIONALITY
    OF CONSTRUCTOR AND HOW THEY WORK.
    RULES FOR CONSTRUCTOR :
    SAME NAME AS CLASS.
    NO RETURN TYPE.
    INVOKE AUTOMATICALLY WHEN CLASS OBJECT IS
    MADE.
    IT CAN BE BOTH DEFAULT AND PARAMETERIZE.
    DEFAULT CONSTRUCTOR EXIT'S AUTOMATICALLY,
    BUT WE MAKE A CONSTRUCTOR BY OUR SELF WE
    LOSE THE DEFAULT CONSTRUCTOR.
    IT MUST BE IN PUBLIC SECTION OF CLASS.
POINT TO BE NOTED.
    CONST OBJECT CAN ACCESS ONLY CONST DATA MEMBERS,
    AND NON CONST CAN ACCESS BOTH THE CONST AND NON_CONST
    DATA MEMBER'S.
WE ALSO SEE THE USE OF COPY CONSTRUCTOR AND ALSO
DESTRUCTOR. IN THE PROGRAM WHICH IS WRITTEN BELOW.
*/
#include <iostream>
using namespace std;
class user
{
    string name;
    string age;

public:
    user()
    {
        this->name = "No_Name";
        this->age = "No_Set";
    }
    user(string name, string age) : name(name), age(age)
    {
    }
    user(const user &u)
    {
        // u.name = "Raja";erro(x)
        cout << "First of all copy constructor is called " << endl;
        this->name = u.name;
        this->age = u.age;
    }
    void display() const;
    ~user() { cout << "I AM GOING TO DI_STRCUT EVERYTHING" << endl; }
};
void user ::display() const
{
    cout << "Name  ==> " << name << endl;
    cout << "Age   ==> " << age << endl;
}
int main()
{
    user u;
    u = user("Mohsin", "21.2");
    u.display();
    user u1(u); // copy constructor is called
    u1.display();
    user u2;
    u2 = u;
    u2.display(); // not best approach no copy constructor is called
    user u3 = u2;
    u3.display(); // copy constructor is called
    return 0;
}