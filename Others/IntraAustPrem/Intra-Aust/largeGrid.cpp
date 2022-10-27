#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll n = 1e9+9;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll row = 1; 
    ll column =5; 
    ll arr[row][column];
    arr[1][1] = 1; 
    ll sum =0;
    for (int i = 1; i <=row; i++)
    {   sum = sum - arr[i][j];
        for (int j = 1; j <=column; j++)
        {   sum+=j;
            arr[i][j] =sum;
        }
       
    }
    for (int i = 1; i <=row; i++)
    {
        for (int j = 1; j <=column; j++)
        {
           cout <<arr[i][j]<< " ";
        }
        
    }
    
}