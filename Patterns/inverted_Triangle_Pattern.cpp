#include <iostream>
using namespace std;

// int main()
// {
//     int n = 4;
//     for (int i = 0; i < n; i++)
//     {
//         //  Spaces
//         for (int j = 0; j < i; j++)
//         {
//             cout << " ";
//         }

//         for (int j = 0; j < n - i; j++)
//         {
//             cout << i + 1;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// For characters

int main()
{
    int n = 4;
    char ch = 'A';
    for (int i = 0; i < n; i++)
    {
        //  Spaces
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        for (int j = 0; j < n - i; j++)
        {
            cout << char(ch + i);
        }
        cout << endl;
    }
    return 0;
}