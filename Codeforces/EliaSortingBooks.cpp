

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
#define nl '\n'
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

void solve()
{

    int freq[26] = {};
    unordered_map<char, int> m;
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    // sort(all(s));
    set<char> st;
    for (int i = 0; i < n; i++)
    {
        freq[s[i] - 'a']++;
    }
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < 26; j++)
        {
            if (!freq[j] || j == n / k)
            {
                cout << (char) (j + 'a');
                break;
            }
            freq[j]--;
        }
    }
    cout << nl;
}

int main()
{
    FAST;
    int tt;
    tt = 1;
    cin >> tt;
    //  for(int i = 1; i<=tt; i++)
    while (tt--)
    {
        solve();
    }
}