#include<bits/stdc++.h>
using namespace std;
int arr[2000];
int main(){
    int n,m;cin >> n >> m;
   
    vector<int> v2; 
    for(int i =0;i<n;i++){
        int l,r;
        cin >> l >> r;
        for(int i =l;i<=r;i++){
            arr[i]++;
        }
    }
    int count =0;
    for(int i =1;i<=m;i++){
        if(arr[i] ==0){
           v2.push_back(i);
        }
    }
    cout<<v2.size()<<endl;
    for (int i = 0; i <v2.size(); i++)
    {
        cout<<v2[i]<<" ";
       // else cout<<v[i]+1<<" ";
    }
    
}