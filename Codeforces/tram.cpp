#include<bits/stdc++.h>
using namespace std; 

int main(){
    int n; 
    cin >>n; 
    int sum =0; 
    int Max =-1; 
    for (int i = 0; i < n; i++)
    {
        int a,b; 
        cin >> a >> b;
        sum+=b; 
        sum-=a;
        Max = max(Max,sum);
    }
    cout <<Max<<endl;
    
}