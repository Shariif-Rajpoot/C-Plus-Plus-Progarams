#include <iostream>
using namespace std;
class student
{
    int rollNumber;

public:
    void getNumber();
    student();
    student(int);
};
student::student() {}
student::student(int r)
{
    rollNumber = r;
}
void student::getNumber()
{
    cout << "Roll Number => " << rollNumber << endl;
}
class Exam : public student
{
protected:
    float maths;
    float physics;

public:
    Exam();
    Exam(float, float, int);
    void getMarks();
};
Exam::Exam() {}
Exam::Exam(float m1, float m2, int r) : maths(m1), physics(m2), student(r) {}
void Exam::getMarks()
{
    cout << "Physics => " << physics << endl;
    cout << "Maths   => " << maths << endl;
}
class Result : public Exam
{
private:
    float percentage;

public:
    Result();
    Result(int, float, float);
    void display();
};
Result::Result() {}
Result::Result(int r, float m1, float m2) : Exam(m1, m2, r) {}
void Result::display()
{
    percentage = ((maths + physics) * 100) / 200;
    getNumber();
    getMarks();
    cout << "Result is " << percentage << "%" << endl;
}
int main()
{
    Result Ali(12, 99.2, 99.8);
    Ali.display();
    return 0;
}