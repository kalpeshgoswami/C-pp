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
    int choice;

    cout << "1. Convert Seconds to Time" << endl;
    cout << "2. Convert Time to Seconds" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
    {
        int seconds;
        cout << "Enter total seconds: ";
        cin >> seconds;
        T.secondToTime(seconds);
        break;
    }
    case 2:
    {
        int h, m, s;
        cout << "Enter hours: ";
        cin >> h;
        cout << "Enter minutes: ";
        cin >> m;
        cout << "Enter seconds: ";
        cin >> s;
        T.timeToSecond(h, m, s);
        break;
    }
    default:
        cout << "Invalid choice!" << endl;
    }

    return 0;
}