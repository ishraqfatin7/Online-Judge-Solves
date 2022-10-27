#include <bits/stdc++.h>
using namespace std;
using ll = long long;
bool arraySortedOrNot(vector<ll> arr, int n)
{

    if (n == 0 || n == 1)
        return true;

    for (int i = 1; i < n; i++)

        if (arr[i - 1] > arr[i])
            return false;

    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;
        ll odd[n], even[n];

        for (ll i = 0; i < n; i++)
        {
            cin >> odd[i];
        }
        for (ll i = 0; i < n; i++)
        {
            even[i] == odd[i];
        }
        vector<ll> evens, odds;
        for (ll i = 0; i < n; i++)
        {
            
            if (odd[i] % 2 == 0)
                evens.push_back(odd[i]);
            else
                odds.push_back(odd[i]);
        }
        sort(even, even + n);

        bool isOddSorted = is_sorted(evens.begin(),evens.end());
        bool isEvenSorted = is_sorted(odds.begin(),odds.end());
        
        
        if (isOddSorted && isEvenSorted)
        {
            cout << "YES" << endl;
        }
        else
        {

            
            cout << "NO" << endl;
        }
    }
}