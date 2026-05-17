#include <iostream>
using namespace std;

int SumofDigits(int n)
{
    int digitSum = 0;
    while (n > 0)
    {
        int digit = n % 10;
        digitSum += digit;
        n /= 10;
    }
    return digitSum;
}
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << SumofDigits(n);
    return 0;
}