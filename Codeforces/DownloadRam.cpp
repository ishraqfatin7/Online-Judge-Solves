#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {   int n, k;
        // vector<int> apps;
        // vector<int> rams;
        int apps[10000];
        int rams[10000];
        vector<pair<int,int>>system;
        cin >> n >> k;

        for (int i = 0; i < n; i++)
        {
            cin >> apps[i];
            // apps.push_back(x);
        }
        
        for (int i = 0; i < n; i++)
        {

            cin>> rams[i];
            system.push_back(make_pair(apps[i], rams[i]));
        }
        int ram = k;
        sort(system.begin(), system.end());
        
        for (int i = 0; i < n; i++)
        {
            if (system[i].first <= ram)
            {
                ram += system[i].second;
            }
            else
            {
                break;
            }
        }
        cout << ram << endl;
    }
}