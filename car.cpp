#include <iostream>
using namespace std;
class Car
{
    string name, color;
    int price;
    static int Count;

public:
    static int count;
    Car();
    Car(string, string, int);
    void display();
    static void getCount();
};
int Car::count;
int Car::Count;
Car::Car() {}
Car::Car(string name, string color, int price)
    : name(name), color(color), price(price) { count++; }
void Car::display()
{
    Count++;
    cout << Count << " => Name   --> " << name << endl;
    cout << Count << " => Color  --> " << color << endl;
    cout << Count << " => Price  --> " << price << endl;
    cout << endl;
}
void Car::getCount()
{
    cout << "Total number of cars ==> " << count << endl;
}
int main()
{
    Car c1, c2, c3, c4, c5, c6;
    c1 = Car("BMD", "White", 200000000);
    c2 = Car("BMD", "Black", 250000000);
    c3 = Car("BMD", "Gray", 220000000);
    c4 = Car("Civic", "Gray", 2000000);
    c5 = Car("Prado", "Gray", 500000);
    c6 = Car("GLI", "Gray", 400000);
    Car car[] = {c1, c2, c3, c4, c5, c6};
    for (int i = 0; i < (Car::count); i++)
        car[i].display();
    Car::getCount();
    return 0;
}