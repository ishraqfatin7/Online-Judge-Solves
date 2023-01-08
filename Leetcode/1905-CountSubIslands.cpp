#include <bits/stdc++.h>
using namespace std;
const int N = 502;
class Solution
{
public:
    int vis[N][N];
    int dx[4] = {-1, 0, 0, 1};
    int dy[4] = {0, 1, -1, 0};
    bool isValid(int x, int y, int row, int col)
    {
        return x >= 0 && y >= 0 && x < row && y < col;
    }

    void dfs(int x, int y, vector<vector<int>> &grid1, vector<vector<int>> &grid2, int n, int m, bool check)
    {
        vis[x][y] = true;
        if (grid1[x][y] != grid2[x][y])
        {
            check = false;
        }
        for (int i = 0; i < 4; i++)
        {
            int newx = x + dx[i];
            int newy = y + dy[i];
            if (isValid(newx, newy, n, m) && !vis[newx][newy] && grid2[newx][newy])
            {
                dfs(newx, newy, grid1, grid2, n, m, check);
            }
        }
    }
    int countSubIslands(vector<vector<int>> &grid1, vector<vector<int>> &grid2)
    {
        int n = grid1.size();
        int m = grid1[0].size();
        int cnt = 0;
        bool f = true;
        memset(vis, 0, sizeof(vis));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                f = true;
                if (!vis[i][j] && grid2[i][j])
                {
                    dfs(i, j, grid2, grid1, n, m, f);
                    if (f)
                        cnt++;
                }
            }
        }
    }
};