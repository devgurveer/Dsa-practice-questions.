#include <iostream>
using namespace std;
// recursive function
int factorial(int x)
{
    if (x == 0)
    {
        return 1;
    }
    else
    {
        return factorial(x - 1) * x;
    }
}

// iterative function
int factorial1(int x)
{
    int fact = 1;
    for (int i = 1; i <= x; i++)
    {
        fact *= i;
    }
    return fact;
}
int main()
{
    int num = factorial(5);
    // cout << num;
    int num1 = factorial1(5);
    // cout<< num1;
    return 0;
}
