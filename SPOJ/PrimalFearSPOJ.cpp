#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e6 + 12;
bitset<N> sieve;
vector<int> primes;
bool is_good(int x)
{
    string s = to_string(x);
    int div = 1;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '0')
            return false;
        div *= 10;
    }
    div /= 10;
    while (div)
    {
        if (sieve[x])
            return false;
        x %= div;
        div /= 10;
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    sieve[0] = sieve[1] = true;
    for (int i = 2; i * i <= N; i++)
    {
        if (!sieve[i])
        {
            for (int j = i * i; j <= N; j += i)
                sieve[j] = true;
        }
    }
    primes.push_back(0);
    int cnt = 0;
    for (int i = 2; i <= N; i++)
    {
        if (!sieve[i] && is_good(i))
            cnt++;
        primes.push_back(cnt);
    }
   
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;
        cout << primes[n - 1] << endl;
    }
}