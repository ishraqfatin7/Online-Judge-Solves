/*
    Author: MEHEDI ISLAM REMON
    AUST CSE 44th Batch

*/
#include <bits/stdc++.h>
#define ll long long int
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cin.tie(nullptr);             \
    cout.tie(nullptr);
#define pb push_back
#define pi acos(-1)
#define Mod 100000007
#define sn 10000000011
#define MAX LLONG_MAX
using namespace std;

bool compare1(const pair<ll, ll> &a, const pair<ll, ll> &b)
{
    return (a.second > b.second) || (a.second == b.second && a.first > b.first);
}

bool compare(ll a, ll b)
{
    return a > b;
}

int main()
{
    fast;

    ll t;
    cin >> t;
    for (ll i = 0; i < t; i++)
    {
        ll a, b, c, k;
        cin >> a >> b >> c >> k;
        ll sum = a + b + c;
        if(sum%k==0){
            cout <<"Peaceful"<<endl;
        }
        else cout << "Fight"<<endl;
    }
}