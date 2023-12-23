#include <iostream>
using namespace std;
class Exam
{
protected:
    float physics;
    float maths;

public:
    void setMarks(float m1, float m2)
    {
        physics = m1;
        maths = m2;
    }
    void display()
    {
        cout << "Physics => " << physics << endl;
        cout << "Maths   => " << maths << endl;
    }
};
class Sport
{
protected:
    float score;

public:
    void setScore(float s)
    {
        score = s;
    }
    void display()
    {
        cout << "Score   => " << score << endl;
    }
};
class Student : public Exam, public Sport
{
private:
    string name;
    int rollNumber;

public:
    void setData(string, int);
    void getData(void);
};
void Student::setData(string n, int r)
{
    name = n;
    rollNumber = r;
}
void Student::getData()
{
    cout << "Name       => " << name << endl;
    cout << "RollNumber => " << rollNumber << endl;
    Exam::display();
    Sport::display();
    cout << "Total => " << maths + physics + score << endl;
}
int main()
{
    Student s1;
    s1.setData("M.Mohsin", 22);
    s1.setMarks(76.5, 77.4);
    s1.setScore(4.1);
    s1.getData();
    return 0;
}