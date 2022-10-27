#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e6 + 9;
ll arr[N];
ll n, m;

bool isEnough(ll mid)
{

    ll wood = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= mid)
        {
            wood += (arr[i] - mid);
        }
    }
    return wood >= m;
}

void binarySearch()
{

    ll lo = 0, hi = 1e9;
    ll ans = 0;
    while (lo<=hi)
    {
        ll mid = (hi + lo) / 2;
        if (isEnough(mid))
        {
            ans = mid;
            lo = mid+1;
        }
        else
            hi = mid - 1;
    }
    // if(isEnough(hi)){
    //     cout <<hi<<endl;
    // }
    // else cout <<lo<<endl;
   cout << ans << endl;
}

int main()
{
    cin >> n >> m;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    binarySearch();
}