#include <bits/stdc++.h>
using namespace std;
const int N = 210;

int edge[N][N];
int vis[N];
int color[N];
int m, n;

bool dfs(int u)
{
    for (int i = 0; i < n; i++)
    {
        if (edge[u][i])
        {
            if (!vis[i])
            {
                vis[i] = 1;
                color[i] = !color[u];
                dfs(i);
            }
            else if (color[i] == color[u])
            {
                return false;
            }
        }
    }
    return true;
}
int main()
{
    int u, v;
    while (cin >> n and n)
    {
        cin >> m;
        memset(vis, 0, sizeof(vis));
        memset(edge, 0, sizeof(edge));
        for (int i = 0; i < m; i++)
        {
            cin >> u >> v;
            edge[u][v] = 1;
            edge[v][u] = 1;
        }
        color[0] = 1;
        vis[0] = 1;
        if (dfs(0))
        {
            printf("BICOLORABLE.\n");
        }
        else
        {
            printf("NOT BICOLORABLE.\n");
        }
    }
    return 0;
}