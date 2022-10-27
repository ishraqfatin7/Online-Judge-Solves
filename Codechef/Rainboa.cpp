#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);


void solve(int t)
{
    int n; 
    cin >>n;
    int arr[n+1]; 
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    bool f =true;
    for(int i =0;i<n;i++){
        for(int j = i,k = n-i-1; j<=arr[i];j++,k--){

            cout<<arr[j]<<" "<<arr[k]<<endl;

            if(arr[j]!=arr[k]){
                false;
                break;
            }
        }
    }
    if(f){
        cout <<"Yes"<<endl;
    }
    else{
        cout <<"No"<<endl;
    }
    
}

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
       solve(i);
    }
}