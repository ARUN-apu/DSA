#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the Size of n: ";
    cin >> n;
    int marks[n];
    cout << "Enter the Values of this Array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> marks[i];
    }

    int smallestNumber = marks[0];
    for (int i = 1; i < n; i++)
    {
        if (marks[i] < smallestNumber)
        {
            smallestNumber = marks[i];
        }
    }

    cout << "Smallest Number of the Array is: " << smallestNumber << endl;
}