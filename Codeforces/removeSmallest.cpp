#include<bits/stdc++.h>
using namespace std; 

int main() {
    int tt; 
    cin >>tt; 
    while (tt--) {
        int n; 
        cin >>n;
        vector<int>numbers; 
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >>x; 
            numbers.push_back(x);
        }
        sort(numbers.begin(), numbers.end());
        bool isPossible = true;
        for (int i = 0; i < n-1; i++)
        {   
            int sum = abs(numbers[i] - numbers[i+1]);
            if (sum<=1)
            {
                continue; 
            }
            else{
                
                isPossible = false;
                break;
            }
            
        }
        if (isPossible)
        {
            cout <<"YES"<<endl;
        }
        else{
            cout <<"NO"<<endl;
        }
        
        
    }
}