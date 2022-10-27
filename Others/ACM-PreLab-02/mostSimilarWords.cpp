#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);
// map<char, int> alpha;
// void insertLetters()
// {
//     char arr[30] = {'0', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '0'};
//     for (int i = 0; i < 28; i++)
//     {
//         alpha.insert(pair<char, int>(arr[i], i));
//     }
// }

void solve()
{
    int n,m;
    cin >> n >> m;
 string arr[n+2];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int ans = INT_MAX;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            int diff = 0;
            for(int k = 0; k < m; k++){
                diff += abs((arr[i][k] - '0') - (arr[j][k] - '0'));
            }
            ans = min(ans, diff);
        }
    }
    cout << ans << endl;
 
    
}

int main()
{
    FAST;
   
    int tt;
    cin >> tt;
    while (tt--)
    {
        solve();
    }
}