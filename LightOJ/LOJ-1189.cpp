#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{

    ll fact[20] = {}, k = 1;
    fact[0] = 1;

    for (ll i = 1; i <= 20; i++)
    {
        fact[i] = i * k;
        k = fact[i];
    }

    int tt;
    cin >> tt;
    for (int j = 1; j <= tt; j++)
    {
        ll n;
        cin >> n;

        vector<int> answer;
        for (int i = 20; i >= 0; i--)
        {
            if (fact[i] <= n)
            {
                n -= fact[i];
                answer.push_back(i);
            }
        }
        cout << "Case " << j << ": ";
        if (n == 0)
        {
            for (int i = answer.size() - 1; i > 0; i--)
            {
                cout << answer[i] << "!+";
            }
            cout << answer[0] << "!\n";
        }
        else
            cout << "impossible\n";
    }
    return 0;
}
