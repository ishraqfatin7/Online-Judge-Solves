#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep1(i, n) for (int i = 1; i <= (n); i++)
#define rrep(i, n) for (int i = (n)-1; i >= 0; i--)
#define rrep1(i, n) for (int i = (n); i > 0; i--)
#define all_bit(x) __builtin_popcount(x)
#define nl '\n'
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

unordered_map<int, char> m;

void initAlpha()
{
    char c = 'a';
    for (int i = 1; i <= 26; i++)
    {
        m[i] = c;
        c++;
    }
}
void solve()
{
    int n;
    cin >> n;
    stack<char> st;
    string s;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        st.push(s[i] - '0');
    }
    stack<char> ans;
    for(int i = n -1; i>=0;i--){
        if(s[i] =='0'){
            int num1 = s[i-1]-'0';
            int num2 = s[i-2]-'0';
            num2*=10;
            num2+=num1; 
           // cout <<m[num2];
            ans.push(m[num2]); 
            i-=2; 
        }
        else
        {
            ans.push(m[s[i] - '0']);
            // cout << m[s[i] - '0'];
        }
       
    }
    // while (!st.empty())
    // {
    //     int x = st.top();
    //     cout << "first " << x << nl;
    //     if(x ==0){
    //         cout << "under if ";
    //         st.pop(); 
    //         cout <<st.top() <<nl;
    //     }
        // if (x < 10 && x > 1)
        // {   
        //     st.pop();
        //    // ans.push(m[x]);
        //     cout << m[x];
        // }
        // else
        // {   st.pop();
        //     int y = st.top();
        //     st.pop();
        //     int z = st.top();
        //     cout << y << " "<<z;
        //     z+=10; 
        //     z+=y; 
        //     cout << m[z];
        // }
        
    //    st.pop();
        
    // }
    while (!ans.empty())
    {
        cout << ans.top();
        ans.pop();
    }
    cout << endl;
}

int main()
{
    FAST;
    initAlpha();
    int tt;
    // tt = 1;
    cin >> tt;
    // for(int i = 1; i<=tt; i++)
    while (tt--)
    {
        solve();
    }
}