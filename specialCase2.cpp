#include <iostream>
using namespace std;
class Parent
{
public:
    virtual void display()
    {
        cout << "I am Parent class" << endl;
    }
};
class Child : public Parent
{
public:
    void display()
    {
        cout << "I am Child class" << endl;
    }
    /*
    virtual void func()
    {
        cout << "Child Func" << endl;
    }
    logically incorrect segment fault error will appear.
    */
};
// class chota : public Child
// {
// };
int main()
{
    Parent *p;
    Child *c;
    p = new Child;
    p->display();
    // child *ct = new Parent;error
    Parent p2;
    c = (Child *)&p2;
    c->display();
    return 0;
}
/*
NOTE:
If the class contains at least one virtual class then you need to
make the child of the that class, other wise segment fault error
will appear means that logically incorrect.
*/