#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;

    for (int i = 2; i < num; i++)
    {
        if (num % i != 0)
        {
            cout << "Number is Prime.";
            break;
        }
        else
        {
            cout << "Number is not Prime.";
            break;
        }
    }
    return 0;
}