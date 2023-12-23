#include <iostream>
using namespace std;
class person
{
    string name;
    int age;

public:
    person()
    {
        name = "No Name";
        age = 0;
    }
    person(string name, int age);
    void display();
};
person::person(string name, int age) : name(name), age(age) {}
void person::display()
{
    cout << "Name ==> " << name << endl;
    cout << "Age  ==> " << age << endl;
}
// child
class programmer : public person
{
    string favLanguage;

public:
    programmer() : person()
    {
        favLanguage = "Not set";
    }
    programmer(string name, int age, string favLanguage);
    void display();
};
programmer::programmer(string name, int age, string favLanguage) : person(name, age), favLanguage(favLanguage) {}
void programmer::display()
{
    // person::display(); we can do this
    person p1;
    p1.display(); // we can also do this...
    cout << "Favouriate Programming language => " << favLanguage << endl;
}
int main()
{
    programmer pro1;
    pro1.display();
    // programmer::display();
    return 0;
}