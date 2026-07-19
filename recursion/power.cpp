#include <iostream>
using namespace std;
int pow(int m, int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return pow(m, (n - 1)) * m;
    }
}

int mypow1(int m, int n)
{
    if (n == 0)
    {
        return 1;
    }

    else if (n % 2 == 0)
    {
        return mypow1(m * m, n / 2);
    }
    else
    {
        return m * mypow1(m * m, (n - 1) / 2);
    }
}
int main()
{
    // int mypow = pow(2,9);
    // cout<<mypow;
    // int pow1 =  mypow1(2,9);
    // cout<<pow1;
    return 0;
}
