// ’
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

typedef pair<ll, ll> pii;
ll LCM(ll a, ll b)
{
    return a * b / __gcd(a, b);
}

void solve(int t)
{
    string s;
    getline(cin, s);
    stringstream iss(s);
    int x;
    vector<int> num;

    while (iss >> x)
    {
        num.push_back(x);
    }
    int mx = 0;
    for (int i = 0; i < num.size(); i++)
    {
        for (int j = i+1; j < num.size(); j++)
        {
            mx = max(mx, __gcd(num[i], num[j]));
        }
    }
    cout <<mx << endl;
}
int main()
{
    FAST;
    int tt;
    cin >> tt;
    cin.ignore();
    for (int i = 1; i <= tt; i++)
    {
        solve(i);
    }
}