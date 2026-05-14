#include <iostream>
using namespace std;

int main()
{
    int n = 10;
    int oddSum = 0;
    // for (int i = 1; i <= n; i++)
    // {
    //     if (i % 2 != 0)
    //     {
    //         oddSum += i;
    //     }
    // }

    // Using While Loop
    int i = 1;
    while (i <= n)
    {
        if (i % 2 != 0)
        {
            oddSum += i;
        }
        i++;
    }
    cout << "Sum  of All Odd numbers is : " << oddSum << endl;
    return 0;
}