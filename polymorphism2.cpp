#include <iostream>
using namespace std;
class YoutubeChannel
{
    string name;
    int subscriberCount;

protected:
    int performance;
    string ownerName;

public:
    YoutubeChannel();
    YoutubeChannel(string, string);
    void subscribe();
    void unsubscribe();
    void getInfo();
    void practice();
    virtual void channelMonatization() = 0;
};
YoutubeChannel::YoutubeChannel() {}
YoutubeChannel::YoutubeChannel(string name, string ownerName)
{
    this->name = name;
    this->ownerName = ownerName;
    subscriberCount = 0;
    performance = 0;
}
void YoutubeChannel::subscribe()
{
    subscriberCount++;
}
void YoutubeChannel::unsubscribe()
{
    if (subscriberCount > 0)
        subscriberCount--;
}
void YoutubeChannel::practice()
{
    performance++;
}
void YoutubeChannel::getInfo()
{
    cout << endl
         << endl;
    cout << "Channel Name => " << name << endl;
    cout << "Owner Name   => " << ownerName << endl;
    cout << "Subscribers  => " << subscriberCount << endl;
}
class SingingYoutubeChannel : public YoutubeChannel
{
public:
    SingingYoutubeChannel();
    SingingYoutubeChannel(string, string);
    void channelMonatization();
};
SingingYoutubeChannel::SingingYoutubeChannel() : YoutubeChannel() {}
SingingYoutubeChannel::SingingYoutubeChannel(string name, string ownerName) : YoutubeChannel(name, ownerName) {}
void SingingYoutubeChannel::channelMonatization()
{
    if (performance > 5)
    {
        cout << ownerName << " channel's got monotized" << endl;
    }
    else
    {
        cout << "Sorry! Dear, " << ownerName << " you need to do more work" << endl;
    }
}
int main()
{

    YoutubeChannel *ytc;
    SingingYoutubeChannel sytc("Imran", "Imran Hashmi");
    // upcasting
    ytc = &sytc;
    for (int i = 0; i < 6; i++)
    {
        ytc->practice();
        ytc->subscribe();
    }
    YoutubeChannel &b = sytc;
    b.getInfo();
    b.unsubscribe();
    ytc->getInfo();
    ytc->channelMonatization();
    return 0;
}
/*
NOTE:
 IF WE MAKE THE BASE CLASS AN ABSTRACT CLASS, THEN WE MUST HAVE TO OVERRIDE IT,
 EVEN WE INHERIT IT OR NOT FROM THE BASE CLASS IN DRIVE CLASS, ELSE WE FACE AN
 ERROR.
 we can also make the reference variable of abstract class and point it the object
 of derive class.
 AT THE END, we can't make the object of an abstract class.
*/