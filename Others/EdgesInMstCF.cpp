#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
using pii = pair<int, int>;
vector<pair<int, pii>> graph;
#define inf INT_MAX
 

void inputGraph(int e)
{
    for (int i = 0; i < e; i++)
    {
        int source, dest, weight;
        cin >> source >> dest >> weight;
        graph.push_back(mp(weight, mp(source, dest)));
    }
}
// DSU data structure

struct DSU
{
    int *parent;
    int *rank;
    DSU(int n)
    {
        parent = new int[n];
        rank = new int[n];
        for (int i = 0; i < n; i++)
        {
            parent[i] = -1;
            rank[i] = 1;
        }
    }
    int find(int x)
    {
        if (parent[x] == -1)
        {
            return x;
        }
        return parent[x] = find(parent[x]);
    }
    void unite(int x, int y)
    {
        int s1 = find(x);
        int s2 = find(y);
        if (s1 != s2)
        {
            if (rank[s1] < rank[s2])
            {
                parent[s1] = s2;
                rank[s2] += rank[s1];
            }
            else
            {
                parent[s2] = s1;
                rank[s1] += rank[s2];
            }
        }
    }
};

int krushkal(int n)
{
    sort(graph.begin(), graph.end());
    int ans = 0;
    DSU dsu(n);
    bool f = false; 
    for (auto everyPair : graph)
    {
        int weight = everyPair.first;
        int source = everyPair.second.first;
        int dest = everyPair.second.second;
        if (dsu.find(source) != dsu.find(dest))
        {
            dsu.unite(source, dest);
            ans += weight;
        }
    }


    return ans;
}
int main()
{
    int n,e;
    cin >>n >>e; 
    inputGraph(e);
    cout << krushkal(n) << endl;
}
