#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll n;
    cin >> n;
    
    string ans = to_string(n);

    if (n ==1 )
    {
        cout <<n<<endl;
    }
    else if(n ==0){
        cout <<1<<endl;
    }
    else{
        cout <<25<<endl;
    }
    
}