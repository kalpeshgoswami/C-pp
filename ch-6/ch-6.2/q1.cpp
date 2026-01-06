#include <iostream>
using namespace std;

class RBI
{
protected:
    float Rate;

public:
    void getROI()
    {
        Rate = 0.0;
        cout << "RBI rate: " << Rate << endl;
    }
};

class SBI : virtual public RBI
{
public:
    void getROI()
    {
        Rate = 6.4;
        cout << "SBI rate: " << Rate << endl;
    }
};

class BOB : virtual public RBI
{
public:
    void getROI()
    {
        Rate = 8.5;
        cout << "BOB rate: " << Rate << endl;
    }
};

class ICICI : virtual public RBI
{
public:
    void getROI()
    {
        Rate = 7.6;
        cout << "ICICI rate: " << Rate << endl;
    }
};

int main()
{
    RBI R;
    R.getROI();
    SBI S;
    S.getROI();
    BOB B;
    B.getROI();
    ICICI I;
    I.getROI();

    return 0;
}