#include <iostream>

using namespace std;

int main()
{

    int a[100], n;
    cout << "enter your size ";
    cin >> n;

    cout << "enter array element " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "even element ";
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            cout << a[i] << " ";
        }
    }

    return 0;
}