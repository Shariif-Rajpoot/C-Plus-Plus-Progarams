#include <iostream>
using namespace std;
class youtubeChannel
{
public:
    string name;
    string ownerName0;
    int subscriberCount;
    string *publishVideoTitle;
    youtubeChannel()
    {
        publishVideoTitle = new string[3];
    }
    ~youtubeChannel()
    {
        delete[] publishVideoTitle;
        publishVideoTitle = nullptr;
    }
};
int main()
{
    youtubeChannel yt1;
    yt1.name = "CODEBEAUTY";
    yt1.ownerName0 = "Salidina";
    yt1.subscriberCount = 1900;
    yt1.publishVideoTitle[0] = "C++ full course ";
    yt1.publishVideoTitle[1] = "OOP IN ONE SHOT";
    yt1.publishVideoTitle[2] = "HTML & CSS";
    cout << yt1.name << endl;
    cout << yt1.ownerName0 << endl;
    cout << yt1.subscriberCount << endl;
    cout << yt1.publishVideoTitle << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << yt1.publishVideoTitle[i] << endl;
    }
    return 0;
}