#include<bits/stdc++.h>
using namespace std;
using ll = long long; 
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll n; 
    cin >>n;
    ll sum =0;
    if(n&1){
       sum = ((-1)*n-1)/2;
    }
    else{
        sum =n/2; 
    }
    cout << sum << endl;
    return 0;

}
