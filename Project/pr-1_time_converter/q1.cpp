#include <iostream>
using namespace std;

class TimeConverter
{

public:
    void secondToTime(int totalSecond)
    {
        int hours = totalSecond / 3600;
        int minutes = (totalSecond % 3600) / 60;
        int seconds = totalSecond % 60;

        cout << "HH:MM:SS => " << hours << ":" << minutes << ":" << seconds;
    }

    void timeToSecond(int hours, int minutes, int seconds)
    {
        int totalSeconds = (hours * 3600) + (minutes * 60) + seconds;

        cout << "Total seconds: " << totalSeconds << endl;
    }
};
int main()
{
    TimeConverter T;
    int seconds;

    cout << "Enter total seconds" << endl;
    cin >> seconds;

    T.secondToTime(seconds);

    int h, m, s;

    cout << "\n\nEnter hours: " << endl;
    cin >> h;

    cout << "Enter minutes: " << endl;
    cin >> m;

    cout << "Enter seconds: " << endl;
    cin >> s;

    T.timeToSecond(h,m,s);

    return 0;
}