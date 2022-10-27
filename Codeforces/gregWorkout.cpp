#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

void solve()
{
    
    pair < int , string > res[3];
      res[0] = make_pair(0,"chest");
      res[1] = make_pair(0,"biceps");
      res[2] = make_pair(0,"back");
      int n ;
      cin >> n ;
      for(int i = 0 ; i < n ; i++ )
      {   int x;
          cin >> x ;
          res[(i+3)%3].first += x ;
      }
      sort(res,res+3);
      cout << res[2].second << endl;
    
};

int main()
{

    FAST;
    solve();
}