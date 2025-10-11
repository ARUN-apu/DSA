#include <iostream>
using namespace std;
void unique_element(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count == 1)
        {
            cout << arr[i] << " ";
        }
    }
}

int main()
{
    int n = 5;
    int arr[n] = {10, 10, 20, 30, 40};
    cout << "Uniques Elements: ";
    unique_element(arr, n);
    cout << "\nTesting with another array:" << endl;
    int arr2[] = {1, 2, 2, 3, 4, 4, 5};
    int n2 = 7;
    unique_element(arr2, n2);
    return 0;
}