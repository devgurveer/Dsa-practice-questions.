// print the sum of n natural numbers using recursion

#include <iostream>
using namespace std;
int sumOfNaturals(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return sumOfNaturals(n - 1) + n;
    }
}

int main()
{
    int n = 5;
    cout<<sumOfNaturals(n);
    return 0;
}