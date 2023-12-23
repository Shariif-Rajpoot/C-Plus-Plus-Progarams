#include <iostream>
#include <cmath>
using namespace std;
class point; // forward declaration
void calculateDistance(point, point);
class point
{
    int x, y;

public:
    point();
    point(int, int);
    void display();
    friend void calculateDistance(point, point);
};
point ::point() {}
point ::point(int x, int y) : x(x), y(y) {}
void point ::display()
{
    cout << "(" << x << " , " << y << ")" << endl;
}
int main()
{
    point p1, p2;
    p1 = point(0, 6);
    p1.display();
    p2 = point(0, 1);
    p2.display();
    calculateDistance(p1, p2);
    return 0;
}
void calculateDistance(point p1, point p2)
{
    int sub1 = p2.x - p1.x;
    int sub2 = p2.y - p1.y;
    int sum = (sub1 * sub1) + (sub2 * sub2);
    cout << "The distance between the two points is " << sqrt(sum) << endl;
}
