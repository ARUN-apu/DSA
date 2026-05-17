#include <iostream>
using namespace std;

int Nfactorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    cout << Nfactorial(5);
    return 0;
}