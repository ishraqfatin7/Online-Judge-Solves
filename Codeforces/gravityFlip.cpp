#include<bits/stdc++.h>
using namespace std; 

int main() {

    int n; 
    cin >>n; 
    vector<int> cubes; 
    for (int i = 0; i < n; i++)
    {
        int x; 
        cin >>x; 
        cubes.push_back(x);
    }
    sort(cubes.begin(),cubes.end());
    for (int i = 0; i < n; i++)
    {
        cout << cubes[i] << " ";
    }
    
    

}