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
    int n;
    cin >> n;
    map<string, pair<int, string>> m;
    vector<pair<string, pair<string, pair<int, string>>>> v;
    rep(i, n)
    {
        int d;
        char ch;
        string s1, s2, s3, s4;
        cin >> s1 >> s2;
        cin >> d >> ch >> d >> ch >> d;
        cin >> s4;
        v.pb({s1, {s2, {d, s4}}});
        // m[s2] = {d, s4};
    }
    sort(all(v));
    for (auto x : v)
    {
        m[x.S.F] = {x.S.S.F, x.S.S.S};
    }

    map<string, int> blood;
    map<int, int> date;
    for (auto x : m)
    {
        date[x.second.first]++;
        blood[x.second.second]++;
    }
    cout << "A+" << ' ' << blood["A+"] << endl;
    cout << "A-" << ' ' << blood["A-"] << endl;
    cout << "AB+" << ' ' << blood["AB+"] << endl;
    cout << "AB-" << ' ' << blood["AB-"] << endl;
    cout << "B+" << ' ' << blood["B+"] << endl;
    cout << "B-" << ' ' << blood["B-"] << endl;
    cout << "O+" << ' ' << blood["O+"] << endl;
    cout << "O-" << ' ' << blood["O-"] << endl;
    for (auto x : date)
    {
        cout << x.first << ' ' << x.second << endl;
        // }
    }
}
int main()
{
    FAST;
    int tt;
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    tt = 1;
    // cin >> tt;
    //  for(int i = 1; i<=tt; i++)
    while (tt--)
    {
        solve();
    }
}