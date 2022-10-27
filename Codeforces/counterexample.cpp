#include<bits/stdc++.h>
using namespace std;
using ll = long long; 

int32_t main(){
    ll l,r;
    cin >> l >> r;
    vector<ll>nums;
    if(l%2==0){
        nums = {l,l+1,l+2};
    }
    else nums ={l+1,l+2,l+3};

    if(nums[2]>r){
        cout<<-1<<endl;
    }
    else {
        for(int i=0;i<3;i++){
            cout<<nums[i]<<" ";
        }
        cout<<endl;
    }

    
}