#include <iostream>
using namespace std;
class rectangle
{
    float length;
    float width;

public:
    rectangle() { width = length = 0; }
    float area;
    void increment();
    void calculateArea()
    {
        area = length * width;
    }

    void display() const
    {
        cout << "The length => " << length << "\nWidth => " << width << "\nArea ==> " << area << endl;
    }
};
void rectangle::increment()
{
    length++;
    width++;
}
// float rectangle::calculateArea()
// {
//     return (length * width);
// }

int main()
{
    rectangle rect;
    for (int i = 1; i < 3; i++)
        rect.increment();
    rect.calculateArea();
    rect.display();
    return 0;
}