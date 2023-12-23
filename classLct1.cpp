#include <iostream>
using namespace std;
class youtubeChannel
{
    string name;
    string ownerName;

public:
    int subscriberCount;
    string *publishVideoTitle;
    youtubeChannel();
    youtubeChannel(string name, string ownerName);
    ~youtubeChannel();
    void getInfo(int);
};
youtubeChannel::youtubeChannel()
{
    publishVideoTitle = new string[3];
}
youtubeChannel::youtubeChannel(string name, string ownerName) : name(name), ownerName(ownerName)
{
    subscriberCount = 0;
}
youtubeChannel::~youtubeChannel()
{
    delete[] publishVideoTitle;
    publishVideoTitle = nullptr;
}
void youtubeChannel::getInfo(int size)
{
    cout << name << endl;
    cout << ownerName << endl;
    cout << subscriberCount << endl;
    cout << "Videos " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << publishVideoTitle[i] << endl;
    }
}
int main()
{
    youtubeChannel yt1;
    yt1 = youtubeChannel("CODEBEAUTY", "Saldina");
    // yt1.publishVideoTitle[0] = "C++ full course ";
    // yt1.publishVideoTitle[1] = "OOP IN ONE SHOT";
    // yt1.publishVideoTitle[2] = "HTML & CSS";
    yt1.getInfo(0);
    return 0;
}