#include <iostream>
using namespace std;

int main()
{
    char character;
    cout << "Enter a Character: ";
    cin >> character;

    if (character >= 'a' && character <= 'z')
    {
        cout << "Character is Lowercase.";
    }
    else
    {
        cout << "Character is Uppercase.";
    }
    return 0;
}