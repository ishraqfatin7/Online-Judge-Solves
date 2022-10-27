#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll n = 1e9+9;


bool isSquare(int num)
{
    ll root = sqrt(num);
    return (root * root) == num;
}
 
bool isCube(int num)
{
    ll root = cbrt(num);
    return (root * root * root) == num;
}
 

bool checkNum(ll n){
    if(isSquare(n) && isCube(n)){
        return true;
    }
    else return false; 
}

void solve(int i){
    vector<int>pf;
    int n; cin >>n; 
    int arr[n];
    for (int i = 0; i <2*n; i++)
    {
        cin >>arr[i];
    }
    int num ; 
    for (int i = 0; i <2*n; i+=2)
    {
         int prime = arr[i]; 
         int exp = arr[i+1];
         num+=pow(prime, exp);
    }
    cout <<num<<endl;
    if (checkNum(num))
    {
        cout <<"Case "<<i<<": The number is both square and cube."<<"\n";
    }
    else{
        cout<<"Case "<<i<<": The number does not meet expectation."<<"\n";
    }
    
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >>t; 
    for (int i = 1; i <= t; i++)
    {
        solve(i);
    }
    
}