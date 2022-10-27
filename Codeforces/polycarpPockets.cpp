#include <bits/stdc++.h>
using namespace std;
int arr[1000];
int main()
{
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr[x]++;
    }
    int mc = -1;
    for(int i = 0; i < 1000; i++){
        mc = max(mc,arr[i]);
    }
    cout<<mc<<endl;
}