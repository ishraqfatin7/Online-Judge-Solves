#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    //int arr[11] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    while (t--)
    {
        int x; 
        cin >>x; 
        if(x%2==1){
            cout<<7;
            x-=3; 
        }
        x/=2; 
        while(x--){
            cout<<1; 
        }
        cout<<endl;
    }
}