#include <iostream>
#include <string>
using namespace std;
string Remove_occurence(string s, string part)
{
    while (s.length() > 0 && s.find(part) < s.length())
    {
        s.erase(s.find(part), part.length());
    }
    return s;
}

int main()
{
    string s = "daabcbaabcbc";
    string part = "abc";
    cout << "After Removing Occurene the String will be: " << Remove_occurence(s, part);
    return 0;
}