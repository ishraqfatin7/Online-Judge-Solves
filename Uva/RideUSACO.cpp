/*
ID: ishraqf1
LANG: C++
TASK: ride
*/

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

unordered_map<char, int> m;
void solve(int t)
{
    char ch = 'A';
    for (int i = 1; i <= 26; i++)
    {

        m[ch++] = i;
    }
    ofstream fout("ride.out");
    ifstream fin("ride.in");
    string s1, s2;
    fin >> s1 >> s2;
    int a = 1, b = 1;
    for (int i = 0; i < s1.size(); i++)
    {
        a *= m[s1[i]] % 47;
    }
    for (int i = 0; i < s2.size(); i++)
    {
        b *= m[s2[i]] % 47;
    }

    if (a % 47 == b % 47)
    {

        fout << "GO" << endl;
    }
    else
    {
        fout << "STAY" << endl;
    }
}
int main()
{
    FAST;
   
    int tt;
    tt = 1;
    // cin >> tt;
    for (int i = 1; i <= tt; i++)
    // while (tt--)
    {
        solve(i);
    }
    return 0;
}