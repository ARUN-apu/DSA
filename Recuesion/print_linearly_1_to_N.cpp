#include <iostream>
using namespace std;
void PrintNumber(int i, int n)
{
    if (i > n)
        return;
    cout << i << " ";
    PrintNumber(i + 1, n);
}

int main()
{
    int n;
    cin >> n;
    PrintNumber(1, n);
    return 0;
}