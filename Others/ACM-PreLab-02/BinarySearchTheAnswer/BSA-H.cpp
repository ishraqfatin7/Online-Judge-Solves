#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e6 + 9;
ll arr[N];
ll n, m;

bool isEnough(int mid)
{
    int cnt = 1, p = 0, i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] > mid)
            return false;
        if (p + arr[i] <= mid)
        {
            p += arr[i];
        }
        else
            p = arr[i], cnt++;
    }
    return cnt <= m;
}
void binarySearch()
{

    ll lo = 0, hi = 1e9;
    ll ans = 0;
    int itr = 0;
    while (hi - lo >= 1)
    {
        ll mid = (hi + lo) / 2;

        if (isEnough(mid))
        {
            ans = mid;
            hi = mid;
        }
        else
            lo = mid + 1;
    }

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
    int j = 1;
    while (t--)
    {
        cin >> n >> m;
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
      //  sort(arr, arr + n);
       cout <<"Case "<<j++<<": ";
        binarySearch();
    }
}