#include <iostream>
using namespace std;

int main()
{

    int start, End;
    int count = 0;

    cout << "enter start year :";
    cin >> start;

    cout << "enter ending year :";
    cin >> End;

    for (int year = start; year <= End; year++)
    {
        if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        {
            cout << year << " ";
            count++;
        }
    }

    cout << "leap year";

    return 0;

}
