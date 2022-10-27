#include<iostream>
#include<bits/stdc++.h>
#include<iomanip>
#include<algorithm>
#include<vector>
using namespace std;


void solve(){
    int n;
    cin >>n; 
    vector<int>a(n);
    for (int i = 0; i < n; i++)
    {
        cin >>a[i];
    }
    int ans = 0;
    sort(a.begin(), a.end());
    
    if (a[0]==a[n-1])
    {
       cout<< -1 <<endl;
       return;
    }
    for (int i =  1; i < n; i++)
    {
        ans = __gcd(ans,a[i]-a[0]);
    }
    cout<< ans<<endl;
    
    
}

int main(){
    cin.tie(0);
    cout.tie(0);
    cout<<fixed;
    cout<<setprecision(10);
    int t;
    cin >>t;
    for (int i = 0; i <t; i++)
    {
       solve();
       
    }
    

}