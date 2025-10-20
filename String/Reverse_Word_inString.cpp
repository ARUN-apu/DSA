#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string Reverse_Word(string s)
{
    int n = s.length();
    string ans = "";

    reverse(s.begin(), s.end());
    for (int i = 0; i < n; i++)
    {
        string word = "";
        while (i < n && s[i] != ' ')
        {
            word += s[i];
            i++;
        }

        reverse(word.begin(), word.end());
        if (word.length() > 0)
        {
            ans += " " + word;
        }
    }
    return ans.substr(1);
}

int main()
{
    string s = " Senapati  Arun ";
    cout << "After Reverse the word in the String: " << endl;
    cout << Reverse_Word(s);
    return 0;
}