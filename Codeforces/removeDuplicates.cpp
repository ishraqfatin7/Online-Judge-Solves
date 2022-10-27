#include <bits/stdc++.h>
using namespace std;
int arr[10000];
int arr2[10000];
int main()
{
    int n;
    cin >> n;
   
    set<int> num;
    vector<int>v;
    for (int i = 0; i < n; i++)
    {
       int x; cin >>x; 
       v.push_back(x);
       num.insert(x);
    }
   
    // for (auto x = num.begin(); x != num.end(); x++){
        
    // }
    reverse(v.begin(),v.end());
    vector<int>v2;
    for (int i = 0; i < v.size(); i++)
    {
       if(num.find(v[i]) != num.end()){
           v2.push_back(v[i]);
           num.erase(v[i]);
       }
    }
    cout << v2.size()<<endl;
    reverse(v2.begin(),v2.end());
    for(int i = 0; i < v2.size(); i++){
        cout<<v2[i]<<" ";
    }
}