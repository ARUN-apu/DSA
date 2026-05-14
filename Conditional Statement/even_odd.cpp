#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the Number: ";
    cin >> num;

    if (num % 2 == 0)
    {
        cout << "Number is Positive";
    }
    else
    {
        cout << "Number is Negative";
    }
    return 0;
}