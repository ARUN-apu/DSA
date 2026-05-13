#include <iostream>
#include <vector>
using namespace std;

void helper(vector<vector<int>> &mat, int row, int col, string path, vector<string> &ans)
{
    int n = mat.size();
    if (row < 0 || col < 0 || row >= n || col >= n || mat[row][col] == 0 || mat[row][col] == -1)
    {
        return;
    }

    if (row == n - 1 && col == n - 1)
    {
        ans.push_back(path);
        return;
    }

    // visit[row][col] = true;
    mat[row][col] = -1;
    //  down
    helper(mat, row + 1, col, path + "D", ans);
    // Up
    helper(mat, row - 1, col, path + "U", ans);
    // Right
    helper(mat, row, col + 1, path + "R", ans);
    // Left
    helper(mat, row, col - 1, path + "L", ans);

    mat[row][col] = 1;
}

vector<string> findPath(vector<vector<int>> &mat)
{
    int n = mat.size();
    vector<string> ans;
    string path = "";
    // vector<vector<bool>> visit(n, vector<bool>(n, false));

    helper(mat, 0, 0, path, ans);
    return ans;
}

int main()
{

    vector<vector<int>> mat = {{1, 0, 0, 0}, {1, 1, 0, 1}, {1, 1, 0, 0}, {0, 1, 1, 1}};

    vector<string> ans = findPath(mat);
    for (string path : ans)
    {
        cout << path << endl;
    }

    return 0;
}
