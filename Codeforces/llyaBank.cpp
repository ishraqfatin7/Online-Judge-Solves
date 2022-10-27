#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll n;
    cin >> n;
    if (n > 0)
    {
        cout << n << endl;
    }
    else if (n < 0)
    {
        n = n * -1;
        if(n%10>=((n/10)%10)){
            cout<<-n/10<<endl;
        }
        else{
            cout<<-(n/100)*10-(n%10)<<endl;
        }
        return 0;
    }
   
    return 0;
}
