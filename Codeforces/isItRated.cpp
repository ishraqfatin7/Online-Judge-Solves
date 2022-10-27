#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

int main()
{
    FAST int t;
    cin >> t;
    vector<pair<int, int>> v;
    for (int i = 0; i < t; i++)
    {
        int x, y;
        cin >> x >> y;
        v.push_back(make_pair(x, y));
    }
    bool rated = false;
    bool unrated = false; 
    bool maybe = false;
   // bool sortedIncreasing = is_sorted(v.begin(), v.end());
    bool sortedDecreasing = is_sorted(v.rbegin(), v.rend());
    for (int i = 0; i < t; i++)
    {
        if (v[i].first != v[i].second)
        {
            rated = true;
        }
        if(v[i].first == v[i].second){
            if(sortedDecreasing){
                maybe = true;
            }
            else{
                unrated = true;
            }
        }
    }
    if(rated){
        cout<<"rated"<<endl;
        return 0;
    }
    else if(unrated){
        cout<<"unrated"<<endl;
        return 0;
    }
    else if(maybe){
        cout<<"maybe"<<endl;
        return 0;
    }
}