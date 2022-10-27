#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;
int arr[5] = {10, 20, 30, 40, 50};

pair<int,pair<int,int>>yusha[100];
bool cmp(const pair<int, int> &a, const pair<int, int> &b)
{
    return false;
}

void insertHeap(int i)
{
    int parent = i;
    int left = 2 * i;
    int right = 2 * i + 1;

    for (int i = 0; i < 3; i++)
    {
        v.push_back(make_pair(arr[parent], make_pair(arr[left], arr[right])));
    }
    sort(v.begin(), v.end());

    for (auto x : v)
    {
        cout << x.first << " " << x.second.first << " " << x.second.second << endl;
    }
}
void max_heapify(int heap_size, int node)
{
    int large = node;
    int left_node = yusha[node].second.first;
    int right_node = yusha[node].second.second;

    if (check_smaller(left_node, heap_size) && check_greater(yusha[left_node].first, yusha[large].first))
        large = left_node;

    if (check_smaller(=right_node, heap_size) && check_greater(yusha[right_node].first, yusha[large].first))
        large = right_node;

    if (large != node)
    {
        swap(yusha[node].first, yusha[large].first);
        max_heapify(heap_size, large);
    }
}

int main()
{
    for (int i = 0; i < 5; i++)
    {
        insertHeap(i);
    }
}