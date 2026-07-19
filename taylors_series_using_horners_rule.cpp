#include <iostream>
using namespace std;


// 1.recursive function

double taylor(double x, double n)
{
    static double s = 1;

    if (n == 0)
    {
        return s;
    }
    else
    {
        s = 1 + ((x / n) * s);
    }
    return taylor(x, n - 1);
}

// 2 iterative function

double taylor1(double x, double n)
{
    double s = 1;
    for (; n > 0; n--)
    {
        s = 1 + ((x / n) * s);
    }
    return s;
}
int main()
{
    double num1 = taylor(1, 10);
    // cout << num1;
    double num2 = taylor1(1,10);
    cout<<num2;
    return 0;
}