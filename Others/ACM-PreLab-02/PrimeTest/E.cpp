#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

const int N = 1e6 + 9;
bool mark[N];
vector<int> primes;

void sieve()
{
    // mark[2] = true;
    // mark[1] = true;
    for (int i = 2; i * i <= N; i++)
    {
        if (!mark[i])
        {
            for (ll j = i * i; j <= N; j += i)
            {
                mark[j] = true;
            }
        }
    }
    // for (int i = 2; i <= N; i++)
    // {
    //     if (!mark[i])
    //         primes.push_back(i);
    // }
}

int main()
{
    FAST;
    sieve();
    string s;
    while (cin >> s)
    {
        if (s.size() == 1 && s[0] == '0')
            return 0;
        vector<int> v;
        int mn = INT_MIN;
        for (int i = 0; i < s.size(); i++)
        {
            v.push_back(s[i] - '0');
        }
        for (int i = 0; i < v.size(); i++)
        {
            int num = 0;
            for (int j = i; j < v.size(); j++)
            {
                num = num * 10 + v[j];
                if (num > 100000)
                {
                    break;
                }
                else if (!mark[num])
                {
                    mn = max(mn, num);
                }
            }
        }
        cout << mn << endl;
    }
}