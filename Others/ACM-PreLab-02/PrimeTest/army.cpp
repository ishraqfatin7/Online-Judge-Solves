#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);
bool check(int v[], int mid, int n)
{
    for (int i = 0; i < n; i++)
    {
       if(v[i] == mid){
        
       }
    }
    return true;
}

int main()
{
    FAST;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int v[n];
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v, v + n);
        vector<int> diff;

        for (int i = 0; i < n; i++)
        {
            diff.push_back(1000 - v[i]);
        }
        int lo = v[0];
        int hi = v[n - 1];
        while (lo <= hi)
        {
            int mid = lo + (hi - lo) / 2;
        }

        cout << defense * attack << endl;
    }
}