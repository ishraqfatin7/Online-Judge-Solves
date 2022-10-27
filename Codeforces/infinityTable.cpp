#include <bits/stdc++.h>
using namespace std; //
using ll = long long;
int main()
{
   int tt;cin >> tt;
   while (tt--){
        ll n;
    cin >> n;

    ll ans = ceil(sqrt(n));
    ll col = (ans * ans) - n;
     if(col>ans){
        cout << ans << " " << col + 1 << endl;
     }
     else {
         cout<<col-(ans*ans-col)-1<<" "<<ans*ans<<endl;
     }
   }
}