#include<bits/stdc++.h>
using namespace std; 


int isPrime(long long int n){
  
    
    if (n==2)
    {
        return 1;
    }
    if (n<2)
    {
        return 0;
    }
    if (n%2==0)
    { 
        return 0;
    }
    for (long long int i = 3; i*i <=n; i+=2)
    {    if(n%i==0) return 0;
        
    }
    return 1;
    
}

int main() {
    long long int n;
    cin >>n;
    long long arr[n];
    for (long long i = 0; i < n; i++)
    {
            cin >>arr[i];
    }
    long long ans;
    for (long long i = 0; i <n; i++)
    {
        ans = sqrt(arr[i]);
        if (ans*ans == arr[i] &&isPrime((ans))==1)
        {
            cout <<"YES"<<endl;
        }
        else{cout <<"NO"<<endl;}
        
    }
    
    
}