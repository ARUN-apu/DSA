#include <iostream>
using namespace std;

void intersection(int arr1[], int n, int arr2[], int p)
{
    for (int i = 0; i < n; i++)
    {

        bool alreadyPrinted = false;
        for (int k = 0; k < i; k++)
        {
            if (arr1[k] == arr1[i])
            {
                alreadyPrinted = true;
                break;
            }
        }
        if (alreadyPrinted)
            continue;

        for (int j = 0; j < p; j++)
        {
            if (arr1[i] == arr2[j])
            {
                cout << arr1[i] << " ";
                break;
            }
        }
    }
}

int main()
{
    int arr1[5] = {10, 20, 30, 40, 50};
    int arr2[5] = {30, 30, 40, 50, 10};
    intersection(arr1, 5, arr2, 5);
    return 0;
}
