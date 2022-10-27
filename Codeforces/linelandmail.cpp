#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<long long> arr;
    for (int i = 0; i < n; i++)
    {
        long long x;
        cin >> x;
        arr.push_back(x);
    }
    for (int i = 0; i <n; i++)
    {   long long minValue = INT_MAX;
        if(i>0){
            minValue = arr[i] - arr[i-1];
        }
        if (i<n-1)
        {
            minValue = min(minValue, arr[i+1]-arr[i]);
        }
        long long maxValue = max(arr[i]-arr[0],arr[n-1]-arr[i]);
        cout << minValue <<" " <<maxValue << endl;
    }
     
}


//TLE
// for (int i = 0; i < n; i++)
//     {   long long minValue = INT_MAX;
//         long long maxValue = INT_MIN;
//         for (int j = 0; j < n; j++)
//         {
//             long long distance = abs(arr[i] - arr[j]);
//             if (distance)
//             {
//                 minValue = min(minValue, distance);
//                 maxValue = max(maxValue, distance);
//             }
//             continue;
//         }
//         cout << minValue <<" " <<maxValue << endl;
//     }