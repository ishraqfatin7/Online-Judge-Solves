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
    unordered_map<char, int> m;
    m['S'] = 1;
    m['M'] = 2;
    m['L'] = 3;
    m['X'] = 4;
    string s1, s2;
    cin >> s1 >> s2;
    int t1 = 1;
    int t2 = 0;
    int cnt = 0;
    char last1 = s1[s1.size() - 1];
    char last2 = s2[s2.size() - 1];
    if (m[last1] < m[last2])
    {
        cout << "<" << endl;
    }
    else if (m[last1] > m[last2])
    {
        cout << ">" << endl;
    }
    else
    {
        if (last1 == 'S')
        {

            if (s1.size() - 1 < s2.size() - 1)
            {
                cout << ">" << endl;
            }
            else if (s1.size() - 1 > s2.size() - 1)
            {
                cout << "<" << endl;
            }
            else cout << "=" << endl;
        }
        else if (last1 != 'S')
        {
            if (s1.size() - 1 < s2.size() - 1)
            {
                cout << "<" << endl;
            }
            else if (s1.size() - 1 > s2.size() - 1)
            {
                cout << ">" << endl;
            }
            else cout << "=" << endl;
        }
    }
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