#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter Your age: ";
    cin >> age;

    if (age >= 18)
    {
        cout << "You can Vote.";
    }
    else
    {
        cout << "You are Under age.";
    }
    return 0;
}