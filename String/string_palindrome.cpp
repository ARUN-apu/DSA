#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
bool isAlphanumeric(char ch)
{
    if ((ch >= '0' && ch <= '9') || (tolower(ch) >= 'a' && tolower(ch) <= 'z'))
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool ispalindrome(string s)
{
    int n = s.length();
    int start = 0, end = n - 1;
    while (start < end)
    {
        if (!isAlphanumeric(s[start]))
        {
            start++;
            continue;
        }
        if (!isAlphanumeric(s[end]))
        {
            end--;
            continue;
        }
        if (tolower(s[start]) != tolower(s[end]))
        {
            return false;
        }
        start++;
        end--;
    }
    return true;
}
int main()
{
    string str = "RacecaR";
    if (ispalindrome(str))
    {
        cout << "It is a Palindrome." << endl;
    }
    else
    {
        cout << "It is not a Palindrome." << endl;
    }
    return 0;
}