#include <iostream>
#include <vector>
using namespace std;
void reverse(vector<int> &vec)
{
    int size = vec.size();
    int start = 0;
    int end = size - 1;
    while (start < end)
    {
        swap(vec[start], vec[end]);
        start++;
        end--;
    }
}
int main()
{
    vector<int> vec = {10, 20, 52};
    for (int val : vec)
    {
        cout << val << " ";
    }
    cout << endl;
    reverse(vec);
    cout << "After Reversing : " << endl;
    for (int val : vec)
    {
        cout << val << " ";
    }
    return 0;
}
