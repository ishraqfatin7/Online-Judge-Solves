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

void solve()
{
    string s;
    cin >> s;
    int n;
    n = s.size();

    vector<pair<char, int>> order;

    char mn = min(s[0], s[n - 1]);
    char mx = max(s[0], s[n - 1]);

    for (int i = 0; i < n; i++)
    {
        if ((s[i] >= mn and s[i] <= mx))
        {
            order.push_back({s[i], i});
        }
    }

    sort(order.begin(), order.end(), [&](pair<char, int> a, pair<char, int> b)
         { return a.second < b.second; });

    if (order.size() > 2)
    {
        sort(order.begin() + 1, order.begin() + order.size() - 1, [&](pair<char, int> a, pair<char, int> b)
             {
                if(s[0]>s[n-1]){
                    return a.first>b.first;
                }
                return a.first<b.first; });
    }

    vector<int> seq;

    ll moves = 0;

    seq.push_back(1);

    for (int i = 1; i < order.size(); i++)
    {
        moves += abs(order[i - 1].first - order[i].first);
        seq.push_back(order[i].second + 1);
    }

    cout << moves << " " << seq.size() << endl;

    for (auto i : seq)
    {
        cout << i << " ";
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