#include<bits/stdc++.h>
using namespace std;
#define Fast ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;


int32_t main(){
    Fast; 
    int n;
    cin >> n;
    vector<ll> nums; 
    for(int i =0;i<n;i++){
        ll x;cin >>x;
        nums.push_back(x);
    }
    ll first = nums[0];
    ll count =0;
    for(int i =1;i<nums.size();i++){
        if(first>nums[i]){
            count +=first -nums[i];
        }
        else first = nums[i];
    }
   cout<<count<<endl;
}