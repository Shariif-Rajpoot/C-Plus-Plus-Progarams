#include <iostream>
using namespace std;
class book
{
    string name;
    string author;
    int rateCounter;
    float *rates;

public:
    book() {}
    book(string, string);
    void setCounter_rates();
    friend void show(const book &);
};
book::book(string name, string author) : name(name), author(author)
{
}
void book::setCounter_rates()
{
    cout << "Enter the total rates ==> ";
    cin >> rateCounter;
    rates = new float[rateCounter];
    for (int i = 0; i < rateCounter; i++)
    {
        cout << "Enter rate " << i + 1 << " ==> ";
        cin >> rates[i];
    }
}
void show(const book &b)
{
    float sum = 0;
    for (int i = 0; i < b.rateCounter; i++)
    {
        cout << "Rate " << i + 1 << " ==> " << b.rates[i] << endl;
        sum += b.rates[i];
    }
    cout << "Book Name    ==> " << b.name << endl;
    cout << "Book Author  ==> " << b.author << endl;
    cout << "Book Rate    ==> " << (sum / b.rateCounter) << endl;
}
int main()
{
    book b1;
    b1 = book("C++ lamda story", "Mohsin");
    b1.setCounter_rates();
    show(b1);
    return 0;
}