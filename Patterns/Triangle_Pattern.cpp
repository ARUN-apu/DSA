#include <iostream>
using namespace std;

// int main()
// {
//     int n = 4;
//     int num = 1;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < num; j++)
//         {
//             cout << "*" << " ";
//         }
//         num++;
//         cout << endl;
//     }
// return 0;
// }

// Optimize

// int main()
// {
//     int n = 10;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < i + 1; j++)
//         {
//             cout << "*" << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// For numbers

// int main()
// {
//     int n = 4;
//     int num = 1;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < num; j++)
//         {
//             cout << num << " ";
//         }
//         num++;
//         cout << endl;
//     }
//     return 0;
// }

// Optimize

// int main()
// {
//     int n = 10;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j < i + 1; j++)
//         {
//             cout << i << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// For Characters

// Optimize

int main()
{
    int n = 4;
    for (int i = 0; i < n; i++)
    {
        char ch = 'A' + i;
        for (int j = 0; j < i + 1; j++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
    return 0;
}