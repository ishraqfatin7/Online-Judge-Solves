#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);



void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    ll cnt = 0;
    bool f = false;
    for (int i = 0; i < n; i++)
    {

        for (int j = i; j < n; j++)
        {
            ll sum = 0;
            ll cnt = 0;
            for (int k = i; k <= j; k++)
            {
                sum += v[k];
            }
            if (sum == k && cnt >= 4)
            {
                f = true;
                cout << "Labeo bross, labeo !!" << endl;
                break;
            }
            //  cout << v[i] << " " << v[j] << endl;
        }
    }
    if (!f)
    {
        cout << "No labeo sorry :(" << endl;
    }
}

int main()
{
    FAST;
    solve();
}