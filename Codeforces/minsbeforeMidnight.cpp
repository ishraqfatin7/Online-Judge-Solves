#include<bits/stdc++.h>
using namespace std; 

int main() {
    int tt; cin >>tt; 
    while(tt--){
        int h,m; 
        cin >>h >>m;
        int hm = (23-h)*60+(60-m);
        cout<<hm<<endl; 
    }
}