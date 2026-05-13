#include <iostream>
#include <string>
#include <vector>
using namespace std;
void Reverse_String(vector<char> &s)
{
    int n = s.size();
    int start = 0, end = n - 1;
    while (start < end)
    {
        swap(s[start], s[end]);
        start++;
        end--;
    }
}

int main()
{
    vector<char> s = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd'};
    Reverse_String(s);
    for (char str : s)
    {
        cout << str << " ";
    }

    return 0;
}