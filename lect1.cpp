#include <iostream>
using namespace std;
struct user
{
public:
    string name = "Mohsin";
    int age = 20;
    user()
    {
        cout << "I am default constructor " << endl;
    }
    user(int age, string name) : name(name), age(age) {}
    ~user()
    {
        cout << "Destructor is called " << endl;
    }
    void display(string name, int age);
};
void user::display(string n, int a)
{
    cout << n << endl;
    cout << a << endl;
}
int main()
{
    // user u1 = {20, "Ali"};
    user u2;
    u2.display("Imran", 20);
    return 0;
}