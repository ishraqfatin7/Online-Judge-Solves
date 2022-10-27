#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e6 + 9;
ll arr[N];
ll n, m;

bool isEnough(ll mid)
{
    int pos = -1;
    int cows = m;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] - pos >= mid || pos == -1)
        {
            cows--;
            pos = arr[i];
        }
    }
    return cows <= 0;
}

void binarySearch()
{

    ll lo = 0, hi = 1e9;
    ll ans = 0;
    int itr = 0;
    while (lo <= hi)
    {
        ll mid = (hi + lo) / 2;

        if (isEnough(mid))
        {
            ans = mid;
            lo = mid + 1;
        }
        else
            hi = mid - 1;
    }
    cout << endl;
    // if(isEnough(hi)){
    //     cout <<hi<<endl;
    // }
    // else cout <<lo<<endl;
    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        binarySearch();
    }
}