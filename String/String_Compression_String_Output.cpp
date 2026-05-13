#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
void Stirng_Compression(vector<char> &chars)
{

    int n = chars.size();
    int index = 0;
    for (int i = 0; i < n; i++)
    {
        char ch = chars[i];
        int count = 0;
        while (i < n && chars[i] == ch)
        {
            count++;
            i++;
        }

        if (count == 1)
        {
            chars[index] = ch;
            index++;
        }
        else
        {
            chars[index] = ch;
            index++;
            string str = to_string(count);
            for (char digit : str)
            {
                chars[index] = digit;
                index++;
            }
        }
        i--;
    }
    chars.resize(index);
}
int main()
{
    vector<char> chars = {'a', 'a', 'a', 'b', 'b', 'c', 'c'};
    Stirng_Compression(chars);
    cout << "\"";
    for (char ch : chars)
    {
        cout << ch;
    }
    cout << "\"";
    return 0;
}