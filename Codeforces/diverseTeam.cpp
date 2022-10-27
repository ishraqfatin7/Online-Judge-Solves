#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    set<int> s;
    vector<int>ans;
    int j = 1;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        if (s.count(x) == 0)
        {   s.insert(x);
            ans.push_back(j);
        }
        j++;
    }
    if (s.size() >= k)
    {
        cout << "YES" << endl;
        for (int i = 0; i < k; i++)
        {
            cout << ans[i] << " ";
        }
    }
    else cout<<"NO" << endl;
    
    
}