#include <iostream>
using namespace std;

void printnumbers(int i, int n)
{
    if (i > n)
        return;
    printnumbers(i + 1, n);
    cout << i << " ";
}

int main()
{
    int n;
    cin >> n;
    printnumbers(1, n);
    return 0;
}