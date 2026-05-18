#include <iostream>
using namespace std;

int main()
{
    int decimalNumber;
    cout << "Enter a decimalNumber: ";
    cin >> decimalNumber;

    int originalNumber = decimalNumber;

    int ans = 0;
    int power = 1;
    while (decimalNumber > 0)
    {
        int reminder = decimalNumber % 2;
        decimalNumber /= 2;
        ans += reminder * power;
        power *= 10;
    }
    cout << originalNumber << "'s Binary Number is: " << ans << endl;
    return 0;
}