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

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }
    int ans = 0;
    sort(v.begin(), v.end(),greater<int>());
    for (int i = 0; i <n; i++)
    {
        if (sum <= (v[i] * (i + 1)))
        {
            ans++;
        }
    }
    cout << abs(n - ans) << endl;
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