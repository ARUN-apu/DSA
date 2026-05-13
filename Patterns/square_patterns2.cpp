// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 3;
//     int num = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             cout << num << " ";
//             num++;
//         }
//         cout << endl;
//     }
//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter a number: ";
    cin >> n;

    char ch = 'A';
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << ch << " ";
            ch = ch + 1;
        }
        cout << endl;
    }
    return 0;
}