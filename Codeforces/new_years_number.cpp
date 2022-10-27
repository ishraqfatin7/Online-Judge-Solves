#include<iostream>
using namespace std; 

void solve(int n){
    int flag =0; 
    
    int valueX,valueY; 
    valueY = n%2020; 
    valueX = (n-valueY)/2020 - valueY;


    if (2020*valueX + 2021*valueY == n && valueX>=0)
    {
       cout <<"YES"<<endl; 
    }
    else cout <<"NO"<<endl;
    
}

int main(){
    int t,n; 
    cin>> t; 
    for (int i = 0; i < t; i++)
    {
        cin>>n;
        solve(n);
    }
    
}