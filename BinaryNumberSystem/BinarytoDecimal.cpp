#include <iostream>
using namespace std;

int DecimalToBinary(int BinaryNumber)
{
    int ans = 0;
    int power = 1;

    while (BinaryNumber > 0)
    {
        int reminder = BinaryNumber % 10;
        ans += reminder * power;
        BinaryNumber /= 10;
        power *= 2;
    }

    return ans; // Decimal Form of the Number
}

int main()
{
    int BinaryNumber;
    cout << "Enter BinaryNumber: ";
    cin >> BinaryNumber;

    cout << BinaryNumber << "'s Decimal Number is: " << DecimalToBinary(BinaryNumber) << endl;
}