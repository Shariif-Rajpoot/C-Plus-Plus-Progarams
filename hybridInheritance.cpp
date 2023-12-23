#include <iostream>
using namespace std;
class Student
{
protected:
    int rollNumber;

public:
    void setRollNumber(int);
    void getRollNumber(void);
};
void Student::setRollNumber(int rollNo)
{
    rollNumber = rollNo;
}
void Student::getRollNumber()
{
    cout << "Roll Number => " << rollNumber << endl;
}
class Test : virtual public Student
{
protected:
    float physics;
    float maths;

public:
    void setMarks(float, float);
    void getMarks(void);
};
void Test::setMarks(float m1, float m2)
{
    physics = m1;
    maths = m2;
}
void Test::getMarks()
{
    cout << "Your marks are =>" << endl;
    cout << "Physics => " << physics << endl;
    cout << "Maths   => " << maths << endl;
}
class Sport : virtual public Student
{
protected:
    float score;

public:
    void setScore(float);
    void getScore(void);
};
void Sport::setScore(float s)
{
    score = s;
}
void Sport::getScore()
{
    cout << "Score   => " << score << endl;
}
class Result : public Test, public Sport
{
private:
    float total;

public:
    void calculateTotal();
    void display();
};
void Result::calculateTotal()
{
    total = maths + physics + score;
}
void Result::display()
{
    getRollNumber();
    getMarks();
    getScore();
    cout << "Your Total Marks Are => " << total << endl;
}
int main()
{
    Result Mohsin;
    Mohsin.setRollNumber(22);
    Mohsin.setMarks(92.2, 98.5);
    Mohsin.setScore(4.3);
    Mohsin.calculateTotal();
    Mohsin.display();
    return 0;
}