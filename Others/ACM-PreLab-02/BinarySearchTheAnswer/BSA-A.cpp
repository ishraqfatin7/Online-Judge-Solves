#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);
using namespace std;
using ll = long long;

bool check(vector<int> v, int mid)
{
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] - v[i - 1] > mid)
            return false;
        else if (v[i] - v[i - 1] == mid)
        {
            mid--;
        }
    }
    return true;
}

int binarySearch(vector<int> v, int mx)
{
    int lo = 1;
    int hi = mx + 1;
    int ans = mx;
    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        if (check(v, mid))
        {
            ans = mid;
            hi = mid - 1;
        }
        else
        {
            lo = mid + 1;
        }
    }
    return ans;
}
void solve(int t)
{
    int n;
    cin >> n;
    vector<int> v(n + 1, 0);
    int diff = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        diff = max(diff, v[i] - v[i - 1]);
    }

    cout << "Case " << t << ": ";
    cout << binarySearch(v, diff) << endl;
}

int main()
{

    int tt;
    cin >> tt;
    for (int i = 1; i <= tt; i++)
    {
        solve(i);
    }
}