#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; 
    cin >> n;
    int count =0;
    for (int i = 1; i < n; i++)
    {
        if (i%(n-i)==0)
        {
            count++;
        }
        
        
        
    }
  cout << count;
    
}