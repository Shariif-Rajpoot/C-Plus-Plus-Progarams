#include <iostream>
using namespace std;
class user
{
    string fname;
    string lname;
    int age;
    string email;

public:
    user();
    user(string, string, int);
    friend void getInfo(const user *);
};
user::user()
{
    fname = "No first Name";
    lname = "No last Name";
    age = 0;
    email = "Not set";
}
user::user(string fname, string lname, int age) : fname(fname), lname(lname), age(age)
{
    email = fname + "." + lname + "@email.com";
}
void getInfo(const user *usr)
{
    cout << "First name => " << usr->fname << endl;
    cout << "Last name  => " << usr->lname << endl;
    cout << "Age        => " << usr->age << endl;
    cout << "Email      => " << usr->email << endl;
}
int main()
{
    user u1, u2, u3;
    u1 = user("Mohsin", "Rajpoot", 21);
    u2 = user("Jawad", "Rajpoot", 19);

    getInfo(&u1);
    getInfo(&u2);
    getInfo(&u3);
    return 0;
}