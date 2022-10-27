#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int tt;
    cin >> tt;
    while (tt--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> arr1;
        vector<int> arr2;
        int sum = 0;
        int sum1 = 0;
        int sum2 = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            arr1.push_back(x);
            sum1 += arr1[i];
        }
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            arr2.push_back(x);
            sum2 += arr2[i];
        }
        sort(arr1.begin(), arr1.end());
        sort(arr2.rbegin(), arr2.rend());
        for (int i = 0; i < k; i++)
        {
           if(arr2[i]>=arr1[i]){
                swap(arr1[i], arr2[i]);
           }
           else break;
        }
        for (int i = 0; i < n; i++)
        {
            sum += arr1[i];
        }
        cout << sum << endl;
    }
}