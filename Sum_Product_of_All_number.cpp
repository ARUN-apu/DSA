#include <iostream>
using namespace std;
int sum_of_All_numbers(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int Product_of_All_numbers(int arr[], int n)
{
    int product = 1;
    for (int i = 0; i < n; i++)
    {
        product *= arr[i];
    }
    return product;
}
int main()
{
    int n = 5;
    int arr[n] = {10, 20, 30, 40, 50};
    cout << "Sum of all numbers of the Array is: " << sum_of_All_numbers(arr, n) << endl;
    cout << "Product of all numbers of the Array is: " << Product_of_All_numbers(arr, n) << endl;

    return 0;
}