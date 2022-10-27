#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

void solve()
{
    string s, t;
    cin >> s >> t;
    int a1 = s.size();
    int a2 = t.size();
    int y =0;
    for(int i = 0; i < a2; i++){
        if(t[i] =='a')y++;
    }
    if(y ==0){
        cout<<(ll)pow(2,a1)<<endl;
    }
    else if( y ==1 && a2 == 1){
        cout<<1<<endl;
    }
    else cout<<-1<<endl;
    
};

int main()
{

    FAST;
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
}