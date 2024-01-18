#include <iostream>
#include <list>
using namespace std;
class YoutubeChannel
{
protected:
    string name;
    string ownerName;
    int subscriberCount;
    list<string> publishVideoTitle;

public:
    YoutubeChannel();
    YoutubeChannel(string, string);
    bool operator==(YoutubeChannel);
    void operator++(int);
    void operator--(int);
    void PublishVideoTitle(string);
    void checkAnalytics();
    friend ostream &operator<<(ostream &, YoutubeChannel &);
};
YoutubeChannel::YoutubeChannel() {}
YoutubeChannel::YoutubeChannel(string name, string ownerName) : name(name), ownerName(ownerName), subscriberCount(0) {}
bool YoutubeChannel::operator==(YoutubeChannel ytc)
{
    return (this->name == ytc.name);
}
void YoutubeChannel::operator++(int)
{
    subscriberCount++;
}
void YoutubeChannel::operator--(int)
{
    if (subscriberCount > 0)
        subscriberCount--;
}
void YoutubeChannel::PublishVideoTitle(string title)
{
    publishVideoTitle.push_back(title);
}
void YoutubeChannel::checkAnalytics()
{
    if (subscriberCount > 5)
    {
        cout << name + "'s channel gives the good performance" << endl;
    }
    else
    {
        cout << name + "'s channel don't give the good performance" << endl;
    }
}
ostream &operator<<(ostream &Cout, YoutubeChannel &ytc)
{
    Cout << "Name of channel  => " << ytc.name << endl;
    Cout << "OwnerName of channel  => " << ytc.ownerName << endl;
    Cout << "Subscribers of channel  => " << ytc.subscriberCount << endl;
    return Cout;
}
class MyCollection
{
    list<YoutubeChannel> channels;

public:
    void operator+=(YoutubeChannel &ytc);
    void operator-=(YoutubeChannel &ytc);
    friend ostream &operator<<(ostream &, MyCollection &);
};
void MyCollection::operator+=(YoutubeChannel &ytc)
{
    this->channels.push_back(ytc);
}
void MyCollection::operator-=(YoutubeChannel &ytc)
{
    this->channels.remove(ytc);
}
ostream &operator<<(ostream &Cout, MyCollection &collection)
{
    Cout << "Collection of channels" << endl;
    for (YoutubeChannel ytc : collection.channels)
    {
        Cout << ytc << endl;
    }
    return Cout;
}

int main()
{
    YoutubeChannel ytc1, ytc2;
    ytc1 = YoutubeChannel("Code With Harry", "C++ for beginners");
    ytc2 = YoutubeChannel("Code With Hasnat", "C++ for beginners");
    ytc1++;
    ytc1--;
    cout << ytc1 << ytc2 << endl;
    MyCollection collection;
    collection += ytc1;
    collection += ytc2;
    collection -= ytc1;
    cout << collection << endl;
    return 0;
}
/*
    NOTE ==>
    WHEN WE OVERLOAD THE OPERATOR -=, THEN WE AN ERROR
    WHICH WE CAN'T UNDERSTAND, SIMPLY IN THAT WHICH CLASS'S
    OPERATOR YOU ARE USING WITH -= OBJ; OVERLOAD THE == OPERATOR.
*/