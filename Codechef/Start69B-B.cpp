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
    int n, num_zeros = 0, num_ones = 0;
    std::string s;

    // Get input
    std::cin >> n >> s;

    // Count the number of 0's and 1's in s
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '0')
        {
            num_zeros++;
        }
        else
        {
            num_ones++;
        }
    }

    // Check if it is possible to make a valid partition of s
    if (num_zeros == n && num_ones == n)
    {
        // If so, create a valid partition of s and print the indices of the
        // characters that belong to the first subsequence
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '0')
            {
                std::cout << i << " ";
            }
        }
        std::cout << endl;
    }
    else
    {
        // If not, print -1
        std::cout << -1 << endl;
    }
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