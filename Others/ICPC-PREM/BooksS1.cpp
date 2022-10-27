#include <bits/stdc++.h>
using namespace std;

bool check(int n, int mid, vector<int> &arr)
{
    int sum = 0;
    int sum2 = 0;
    for (int i = 0; i <= mid; i++)
    {
        sum += arr[i];
    }
    for (int i = mid; i < n; i++)
    {
        sum2 += arr[i];
    }
    return sum >= sum2;
}

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    vector<int>ans;
    int lo = 0;
    int hi = n - 1;
    while (lo <= hi)
    {
        int mid = (lo + hi) / 2;
        if (check(n, mid, v))
        {
            lo = mid + 1;
            ans.push_back(lo);
        }
        else
        {
            hi = mid - 1;
        }
    }
    for(auto x:ans)
    {
        cout<<x<<" ";
    }
   
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tt;
    cin >> tt;
    while (tt--)
    {
        solve();
        
    }
    return 0;
}