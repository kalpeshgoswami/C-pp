#include <iostream>
using namespace std;

class M
{
protected:
    int i;

public:
    M(int num)
    {
        i = num;
    }
};

class N : virtual public M
{
protected:
    int k;

public:
    N(int num2, int num) : M(num)
    {
        k = num2;
    }
};

class O : virtual public M
{
protected:
    int j;

public:
    O(int num3, int num) : M(num)
    {
        j = num3;
    }
};

class P : public N, public O
{
protected:
    int m;

public:
    P(int num4, int num3, int num2, int num)
        : M(num), N(num2, num), O(num3, num)
    {
        m = num4;
    }

    void sum()
    {
        cout << "Sum = " << i + k + j + m << endl;
    }
};

int main()
{
    P obj(10, 20, 30, 40);
    obj.sum();
    return 0;
}
