#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

int arr[3000];

void solve(){
    
    int n; cin  >>n; 
    int sum =0;
    int oddCount =0;
    for(int i = 0; i < n;i++){
        int x; cin >>x; 
        x%=2; 
        sum+=x;
        oddCount+=x;
    }
    
    if(sum%2==1 || !(oddCount ==0 || oddCount ==n)){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
};

int main()
{

    FAST;
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
}