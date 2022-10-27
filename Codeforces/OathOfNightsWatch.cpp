#include<bits/stdc++.h>
using namespace std; 

int main() {
    int n; 
    cin>>n; 
    vector<long long> v;
    while(n--){
        long long x; 
        cin>>x; 
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    long long count =0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i]>v[0] && v[i]<v[v.size()-1] )
        {
            count++;
        }
        
        
    }
    cout<<count<<endl;

}