#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the Array: ";
    cin >> n;

    int num[n];
    cout << "Enter the Values of Arrays: ";
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }

    int largest = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (largest < num[i])
        {
            largest = num[i];
        }
    }
    cout << "Largest Number of this Array is: " << largest << endl;
    return 0;
}