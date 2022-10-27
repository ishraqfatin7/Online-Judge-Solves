#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        vector<int> athletes;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            athletes.push_back(x);
        }
        sort(athletes.begin(), athletes.end(),greater<int>());
        int prev = 0,minimum =INT_MAX;
        for (int i = 0; i < n - 1; i++)
        {
            int sum;
            for (int j = i + 1; j < n; j++)
            {
                sum = abs(athletes[i] - athletes[j]);
                minimum = min(sum, minimum);
            }
            prev = sum;
        }
        
        cout << minimum << endl;
    }
}