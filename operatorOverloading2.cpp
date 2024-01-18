#include <iostream>
using namespace std;
class Subscriber
{
    int s = 0;

public:
    Subscriber operator++();
    Subscriber operator++(int);
    Subscriber operator--();
    Subscriber operator--(int);
    void display();
};
Subscriber Subscriber::operator++()
{
    cout << "Pre" << endl;
    Subscriber temp;
    temp.s = ++s;
    return temp;
}
Subscriber Subscriber::operator++(int)
{
    cout << "Post" << endl;
    Subscriber temp;
    temp.s = s++;
    return temp;
}
Subscriber Subscriber::operator--()
{
    cout << "Pre dic" << endl;
    Subscriber temp;
    temp.s = --s;
    return temp;
}
Subscriber Subscriber::operator--(int)
{
    cout << "Post dic" << endl;
    Subscriber temp;
    temp.s = s--;
    return temp;
}
void Subscriber::display()
{
    cout << "S => " << s << endl;
}
int main()
{
    Subscriber s, s2;
    s2 = ++s; // 1//1
    s2 = ++s; // 2//2
    s2 = ++s; // 3//3
    s2 = s++; // 3//4
    s2 = --s; // 3//3
    s2 = s--; // 3//2
    s2.display();
    s.display();

    // basic logic
    //  int x, y;
    //  x = 0;
    //  y = ++x; // 1//1
    //  y = x++; // 1//2
    //  y = ++x; // 3//3
    //  cout << x << endl;
    //  cout << y << endl;
    return 0;
}