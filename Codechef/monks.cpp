#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);
typedef pair<int, int> pii;
// bool cmp (const pair<int, int> &a, const pair<int, int> &b) {
//     return a.second < b.second;
// }

bool compute(vector<int> v, int mid)
{
    int n = v.size();
    int sum = 0;
    for (int i = 0; i < mid; i++)
    {
        sum += v[i];
    }
    int mx = -1;
    for (int i = mid; i < n; i++)
    {
        mx = max(v[i], mx);
    }
    int cnt = 0;
    for (int i = mid; i < n; i++)
    {
        cnt += abs(v[i] - mx);
    }
    if (sum < cnt)
        return false;

    return true;
}

void solve()
{

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int ans = 0;
    sort(v.begin(), v.end());
    int l = 0;
    int r = v[n - 1];
    while (l < r)
    {
        int mid = (l + r) / 2;
        if (compute(v, mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
            l = mid + 1;
    }
    cout << ans << endl;
}

int main()
{

    FAST;

    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
}