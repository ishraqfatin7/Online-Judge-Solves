#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

void solve(){
    
    int n; cin >>n; 
    int arr[n];
    int count =0;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    reverse(arr,arr+n);
    for(int i = 1; i < n; i++){
        while(arr[i]>=arr[i-1] &&arr[i]){
            arr[i]/=2; 
            count++;
        }
        if(arr[i]==0 && arr[i-1] ==0){
            count = -1;
            break; 
        }
    }
    cout << count <<endl;
   
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