#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    int arr[n];
    int c1 =0, c2 =0;
    for(int i = 0; i < n;i++){
        cin >>arr[i];
    }
    for(int i =0;i<n;i++){
        if(arr[i]>k){
            break;
        }
        else if(arr[i]) {
            arr[i] =0;
            c1++;
        };
    }
    for(int i =n-1;i>=0;i--){
        if(arr[i]>k){
            break;
        }
         else if(arr[i]) {
            arr[i] =0;
            c2++;
        };
    }
    cout<<c1+c2<<endl;
}