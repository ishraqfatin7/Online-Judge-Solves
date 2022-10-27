#include <bits/stdc++.h>
using namespace std;

const int N = 5000001;
bool f[N];
vector<int> primes;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    f[1] = true;
    for (int i = 2; i * i <= N; i++)
    {
        if (!f[i])
        {
            for (int j = i * i; j <= N; j += i)
            {
                f[j] = true;
            }
        }
    }
    // for (int i = 2; i <= N; i++)
    // {
    //     if (!f[i])
    //         primes.push_back(i);
    // }

    int tt;
    cin >> tt;
    while (tt--)
    {
        int l, r;
        cin >> l >> r;
        long long sum = 0;
        for (int i = l; i <= r; i++)
        {
            if (!f[i])
            {
                sum += i;
            }
        }
        cout << sum << endl;
    }
    return 0;
}