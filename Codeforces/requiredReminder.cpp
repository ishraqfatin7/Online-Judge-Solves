#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int tt; cin >> tt;
    while(tt--){
        ll x,y,n;
        cin >> x >> y >> n;
        cout<<y+(n-y)/x*x<<endl;
    }
}