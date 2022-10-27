#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> subsets;
void generate(vector<int> &subset, int i, vector<int> nums)
{
    if (i == nums.size())
    {
        subsets.push_back(subset);
        return;
    }
    generate(subset, i + 1, nums);

    subset.push_back(nums[i]);
    generate(subset, i + 1, nums);
    subset.pop_back();
}
int main()
{
    int n, flag = 0, cost;
    cin >> n >> cost;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    vector<int> empty;
    generate(empty, 0, nums);

    for (int i = 0; i < subsets.size(); i++)
    {
        int sum = 0;
        if (subsets[i].size() >= 4)
        {
            for (int j = 0; j < subsets[i].size(); j++)
            {
                sum = sum + subsets[i][j];
                // cout<<subsets[i][j]<<" ";
            }
            // cout<<endl;
            if (sum == cost)
            {
                flag = 1;
                break;
            }
        }
    }
    if (flag == 1)
        cout << "Labeo bross, labeo !!" << endl;
    else
        cout << "No labeo sorry 🙁" << endl;
}