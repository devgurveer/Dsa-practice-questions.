#include <iostream>
using namespace std;
double taylor(int x, int n)
{
    static double p = 1, f = 1;
    double result;
    if (n == 0)
    {
        return 1;
    }

    else
    {
        result = taylor(x, n - 1);
        p = p * x;
        f = f * n;
        return (result + p / f);
    }
}

int main()
{
    double num = taylor(1,10);
    cout << num;
    return 0;
}
