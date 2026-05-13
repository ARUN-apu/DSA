#include <iostream>
using namespace std;
void PrintNumber(int i, int n)
{
    if (i > n)
        return;
    cout << n << " ";
    PrintNumber(i, n - 1);
}

int main()
{
    int n;
    cin >> n;
    PrintNumber(1, n);
    return 0;
}