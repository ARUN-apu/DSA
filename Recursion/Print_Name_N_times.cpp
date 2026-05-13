#include <iostream>
using namespace std;

void printname(int i, int n)
{

    if (i > n)
        return;
    cout << "Arun" << endl;
    printname(++i, n); // Here I have to use pre increment like ++i not post increment i++ . I can also use i + 1.
}

int main()
{
    int n;
    cin >> n;
    printname(1, n);
    return 0;
}