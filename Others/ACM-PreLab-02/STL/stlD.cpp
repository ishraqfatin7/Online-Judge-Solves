#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vll = vector<ll>;
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
#define CLEAR(a, x) memset(a, x, sizeof(a));
#define endl '\n'
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);
int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};

void solve()
{
    int tt;
    cin >> tt;
    string s;
    int j = 1;
    while (tt--)
    {

        map<string, int> mp;
        int count = 0;
        if (j == 1)
        {
            cin.ignore();
            cin.ignore();
            j++;
        }

        while (getline(cin, s) and s != "")
        {

            mp[s]++;
            count++;
        }
        cout << fixed << setprecision(4);
        for (auto it : mp)
        {
            cout << it.first << " " << (it.second * 100.0) / count << endl;
            //  printf("%s %.4f\n", it->first, it->second * 100 / count);
        }
        if (tt)
            cout << endl;
    }
}

int main()
{
    FAST;
    int tt;
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    {
        solve();
    }
}