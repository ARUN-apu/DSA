#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int Stirng_Compression(vector<char> &chars)
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
    return index;
}
int main()
{
    vector<char> chars = {'a', 'a', 'a', 'b', 'b', 'c', 'c'};
    cout << "After Compress the String Index Size: " << Stirng_Compression(chars) << endl;
    cout << "The string look like: " << endl;
    cout << "\"";
    for (char ch : chars)
    {
        cout << ch;
    }
    cout << "\"";
    return 0;
}