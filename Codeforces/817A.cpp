#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep1(i, n) for (int i = 1; i <= (n); i++)
#define rrep(i, n) for (int i = (n)-1; i >= 0; i--)
#define rrep1(i, n) for (int i = (n); i > 0; i--)
#define all_bit(x) __builtin_popcount(x)
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

const int N = 1e5;

void solve()
{
    int n;
    cin >> n;

    int t = 3;
    unordered_map<string, int> m;
    vector<vector<string>> v(5);
    for (int j = 1; j <= t; j++)
    {
        rep(i, n)
        {
            string s;
            cin >> s;
            m[s]++;
            v[j].push_back(s);
        }
    }
    int arr[4] = {0};
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (m[v[i][j]] == 1)
            {
                arr[i] += 3;
            }
            else if (m[v[i][j]] == 2)
            {
                arr[i] += 1;
            }
            else if (m[v[i][j]] == 3)
            {
                arr[i] += 0;
            }
        }
    }
    for(int i = 1; i<=3;i++){
        cout <<arr[i]<<" ";
    }
    cout << endl;
}

int main()
{
    FAST;
    int tt;
    // tt = 1;
    cin >> tt;
    // for(int i = 1; i<=tt; i++)
    while (tt--)
    {
        solve();
    }
}