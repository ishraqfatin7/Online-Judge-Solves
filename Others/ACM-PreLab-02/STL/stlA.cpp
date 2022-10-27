#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

void solve()
{
}

int main()
{
    FAST;
    string s;

    while (getline(cin, s))
    {

        string newS = "";
        // ll found = s.find("Beiju");
        // if (found != -1)
        //     cout << "Beiju";
        // s.erase(s.begin() + found, s.begin() + found + 5);
        ll len = s.length();
        int *a, *b, *curr;
        a = b = curr = NULL;
        vector<char> v;
        vector<char>::iterator it;
        bool f = false;
        int j = 0;
        //  s.replace(s.find("Beiju"), s.length());
        for (ll i = 0; i < len; i++)
        {

            if (s[i] == '[')
            {

                int j = 0;
                f = true;
                continue;
                // while (i < len)
                // {
                //     ++i;
                //     if (s[i] == '[')
                //         j = 0;
                //     if (s[i] == ']')
                //         break;

                //     else if (s[i] != '[')
                //     {
                //         v.insert(v.begin() + j, s[i]);
                //         j++;
                //     }
                // }
            }
            else if (s[i] == ']')
            {
                f = false;
                j = v.size() - 1;
                continue;
                //   v.insert(v.begin(), s[i]);
            }
          
        }

        // for (int i = a; i < b; i++)
        // {
        //     cout << v.at(i);
        // }

        // ll index = newS.find("Beiju");

        // if (index != -1)
        // {
        //     newS.erase(newS.begin() + index, newS.begin() + index + 5);
        //     cout << "Beiju" << newS << endl;
        // }
        // else
        //     cout << newS << endl;

        for (int i = 0; i < v.size(); i++)
        {
            cout << v.at(i);
        }
        cout << endl;
    }
}

// ll n, m;
//  cin >> n >> m;
//  ll sum = 0;
//  map<ll, ll> nums;
//  ll prevX = 0;
//  set<ll> ss;
//  for (ll i = 1; i <= n; i++)
//  {
//      ll x;
//      ss.insert(i);
//      cin >> x;
//      sum += x;
//      nums[i] = x;
//  }
//  for (ll i = 1; i <= m; i++)
//  {
//      ll q;
//      cin >> q;
//      if (q == 2)
//      {
//          ll y;
//          cin >> y;
//          ss.clear();
//          nums.clear();
//          sum = y * n;
//          prevX = y;
//          cout << sum << endl;
//      }
//      else
//      {
//          ll index, z;
//          cin >> index >> z;
//          if (ss.count(index))
//          {
//              ll curr = nums[index];
//              sum += (z - curr);
//              nums[index] = z;
//          }
//          else
//          {
//              ss.insert(index);
//              sum += (z - prevX);
//              nums[index] = z;
//          }
//          cout << sum << endl;
//      }
//  }