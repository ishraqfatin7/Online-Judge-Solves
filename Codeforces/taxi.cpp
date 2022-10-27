#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n; // read
    int arr[n];
    for (int i = 1; i <=n; i++)
    {
        cin >>arr[i];
    }
    int k;
    k  = n;
    sort(arr,arr+n); 
    int count =0;
    for(int i =0;i<k;i++){
        for(int j = i+1; j < k;j++){
            if(arr[i]+arr[j]<=4){
                count++;
                 
            }
        }
    }
    cout<<count<<endl;
}