#include<bits/stdc++.h>
using namespace std; 

int main(){
    int n;cin >>n; 
    int arr[n+1];
   
    vector<int>arr2;
    for(int i=0;i<n;i++){
        cin >>arr[i];
    }
    int count =1;
    int scount =1;
    for (int i = 1; i <=n; i++)
    {
        if(arr[i] ==1 ){
            count++;
            arr2.push_back(scount);
            scount =0;
        }
        if(i ==n){
            arr2.push_back(scount);
        }
        scount++;
    }
    cout<<count<<endl;
    for(int i =0;i<arr2.size();i++){
        cout<<arr2[i]<<" ";
    }
    
}