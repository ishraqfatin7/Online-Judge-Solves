// ’
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

const int N = 2000 + 5;
bool mark[N];
vector<int> primes;
map<char, int> mp;

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
    for (int i = 2; i <= N; i++)
    {
        if (!mark[i])
            primes.push_back(i);
    }
}

void initAlpha()
{
    char ch = 'a';
    char c = 'A';
    for (int i = 1; i <= 26; i++)
    {
        mp.insert(make_pair(ch++, i));
    }
    for (int i = 27; i <= 52; i++)
    {
        mp.insert(make_pair(c++, i));
    }
}

int main()
{
    FAST;
    initAlpha();
    sieve();
    string s;
    while (cin >> s)
    {
        int sum = 0;
        for (int i = 0; i < s.size(); i++)
        {
            sum += mp[s[i]];
        }
        if (!mark[sum])
        {
            cout << "It is a prime word." << endl;
        }
        else
        {
            cout << "It is not a prime word." << endl;
        }
    }
}