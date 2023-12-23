#include <iostream>
using namespace std;
class bankDeposit
{
    int principal;
    int year;
    float interest;
    float returnAmount;

public:
    bankDeposit();
    bankDeposit(int, int, int);
    bankDeposit(int, int, float);
    bankDeposit(bankDeposit &);
    ~bankDeposit();
    void display();
};
bankDeposit::bankDeposit() {}
bankDeposit::bankDeposit(int p, int y, int i)
    : principal(p), year(y), interest(float(i) / 100)
{
    cout << "The interest => " << interest << endl;
    returnAmount = principal;
    for (int i = 0; i < year; i++)
        returnAmount *= (1 + interest);
}
bankDeposit::bankDeposit(int p, int y, float i)
    : principal(p), year(y), interest(i)
{
    returnAmount = principal;
    for (int i = 0; i < year; i++)
        returnAmount *= (1 + interest);
}
bankDeposit::bankDeposit(bankDeposit &bd)
{
    cout << endl
         << endl;
    cout << "\t\tCopy-constructor invoked " << endl;
    principal = bd.principal;
    year = bd.year;
    interest = bd.interest;
    returnAmount = principal;
    if (interest < 1)
    {
        for (int i = 0; i < year; i++)
            returnAmount *= (1 + interest);
    }
    else
    {
        for (int i = 0; i < year; i++)
            returnAmount *= (1 + (float(interest) / 100));
    }
}
void bankDeposit::display()
{
    cout << endl
         << endl;
    cout << "\t\tAfter the period of year/ years ==> " << year
         << "\nYour amount become => " << returnAmount << endl;
}
bankDeposit::~bankDeposit()
{
    cout << endl;
    cout << "\tDestructor is invoked " << endl;
}
int main()
{
    int interestRate, year, principal;
    float interest_Rate;
    bankDeposit bd1, bd2;
    cout << "Enter the Principal Amount ==> ";
    cin >> principal;
    cout << "Enter the Time Period      ==> ";
    cin >> year;
    cout << "Enter the Interest Rate    ==> ";
    cin >> interestRate;
    bd1 = bankDeposit(principal, year, interestRate);
    bd1.display();
    cout << "\t\tEnter for float " << endl;
    cout << "Enter the Principal Amount ==> ";
    cin >> principal;
    cout << "Enter the Time Period      ==> ";
    cin >> year;
    cout << "Enter the Interest Rate    ==> ";
    cin >> interest_Rate;
    bd2 = bankDeposit(principal, year, interest_Rate);
    bd2.display();
    bankDeposit bd3(bd2);
    bd3.display();
    return 0;
}