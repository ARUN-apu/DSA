#include <iostream>
using namespace std;

void SUMofN_numbers(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << sum << endl;
}
int main()
{
    SUMofN_numbers(5);
    return 0;
}