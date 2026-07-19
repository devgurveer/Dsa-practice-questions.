#include <iostream>
using namespace std;
// iterative version
int fibI(int n)
{
    if (n <= 1)
    {
        return n;
    }
    int t0 = 0, t1 = 1, s;
    for (int i = 2; i <= n; i++)
    {
        s = t0 + t1;
        t0 = t1;
        t1 = s;
    }
    return s;
}
// recursive function
int fibr1(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        return fibr1(n - 2) + fibr1(n - 1);
    }
}
// efficient recursive function using memoization
int store[10];
int fibr2(int n)
{
    if (n <= 1)
    {
        store[n] = n;
        return n;
    }

    return store[n] = fibr2(n - 2) + fibr2(n - 1);
}
int main()
{
    for (int i = 1; i < 10; i++)
    {
        store[i] = -1;
    }
    int myFib1 = fibI(3);
    int myFib2 = fibr1(4);
    int myFib3 = fibr2(5);
    cout << myFib1 << endl;
    cout << myFib2 << endl;
    cout << myFib3 << endl;
    return 0;
}
