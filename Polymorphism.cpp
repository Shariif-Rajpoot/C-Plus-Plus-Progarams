#include <iostream>
using namespace std;
class Tutorial
{
protected:
    string title;
    float rating;

public:
    Tutorial(string, float);
    virtual void display() = 0; // pure virtual function
};
Tutorial::Tutorial(string title, float rating)
{
    this->title = title;
    this->rating = rating;
}
class VideoTutorial : public Tutorial
{
    float videoLength;

public:
    // VideoTutorial() {}
    VideoTutorial(string title, float rating, float videoLength);
    void display();
};
VideoTutorial::VideoTutorial(string title, float rating, float videoLength) : Tutorial(title, rating)
{
    this->videoLength = videoLength;
}
void VideoTutorial::display()
{
    cout << "This is amazing video tutorial with title " << title << endl;
    cout << "Rating of this tutorial is " << rating << " out of 5" << endl;
    cout << "The length of video is " << videoLength << " Min" << endl;
}
class TextTutorial : public Tutorial
{
    int textLength;

public:
    // textTutorial() {}
    TextTutorial(string title, float rating, int textLength);
    void display();
};
TextTutorial::TextTutorial(string title, float rating, int textLength) : Tutorial(title, rating)
{
    this->textLength = textLength;
}
void TextTutorial::display()
{
    cout << endl;
    cout << "This is amazing text tutorial with title " << title << endl;
    cout << "Rating of this tutorial is " << rating << " out of 5" << endl;
    cout << "The length of this tutorial is " << textLength << " words" << endl;
}
int main()
{
    VideoTutorial tut1("C++ by unknown", 4.9, 20.3);
    TextTutorial tut2("C++ by unknown", 4.49, 403);
    Tutorial *tut[2];
    tut[0] = &tut1;
    tut[1] = &tut2;
    for (int i = 0; i < 2; i++)
    {
        tut[i]->display();
    }
    return 0;
}
/*
NOTE:
WE can't make the array of abstract class even object.
We can't make the array of objects in heap if we don't have default constructor.
The default constructor in the derived can't invoked if there is no defualt constructor
in the base class.This will throw an error.
*/