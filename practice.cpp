#include <iostream>
using namespace std;
class Date
{
    string day;
    string month;
    string year;
    friend class Birthday;

public:
    Date(string day, string month, string year) : day(day), month(month), year(year) {}
    Date() {}
};
class Birthday
{
    Date myDate;

public:
    Birthday() {}
    Birthday(string day, string month, string year)
    {
        this->myDate.day = day;
        this->myDate.month = month;
        this->myDate.year = year;
    }
    void display()
    {
        cout << myDate.day << "_" << myDate.month << "_" << myDate.year << endl;
    }
};
int main()
{
    Birthday mine("01", "02", "2002");
    mine.display();

    return 0;
}