#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> nums;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        nums.insert(x);
    }
    auto it = nums.begin();
    if (nums.size() > 1)
    {
        it++;
        cout << *it << endl;
        return 0;
    }
    cout<<"NO"<<endl;
    return 0;
}