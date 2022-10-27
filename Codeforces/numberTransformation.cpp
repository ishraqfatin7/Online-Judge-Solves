#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

void solve()
{
    int x, y;
    cin >> x >> y;
    int g = y/x;
    int a, b ;
    //cout << g << endl;
    if(y%x ==0){
        int g = y/x; 
        for(int i =1;i<=g;i++){
            for(int j =1;j<=g;j++){
                if(i*j ==g){
                    a = j;
                    b =i;
                    break;
                }
            }
        }
        cout<<a << " " << b << endl;
    }
    else cout <<0<<" "<<0<<endl;


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