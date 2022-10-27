#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int n, x, y;
ll dfs(ll numx, int levx, ll numy, int levy)
{
    if (levx == 1 && levy == 1)
        return numy;
    if (levx == levy)
    {
        return dfs(numx, levx - 1, numy + numx * x, levy);
    }
    else
    {
        return dfs(numx + numy, levx, numy * y, levy - 1);
    }
}
int main()
{
    cin >> n >> x >> y;
    cout << dfs(1, n, 0, n) << endl;
    return 0;
}