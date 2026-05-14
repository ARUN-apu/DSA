#include <iostream>
using namespace std;

int main()
{
    int mark;
    cout << "Enter Your Mark: ";
    cin >> mark;

    if (mark >= 90)
    {
        cout << "Grade is A";
    }
    else if (mark >= 80 && mark < 90)
    {
        cout << "Grade is B";
    }
    else if (mark >= 70 && mark < 50)
    {
        cout << "Grade is C";
    }
    else
    {
        cout << "Grade is D";
    }
    return 0;
}