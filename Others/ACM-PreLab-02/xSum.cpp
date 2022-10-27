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

// int arr[202][202];
// int graph[202][2002];
// int status[202];

// void initStatus(int N)
// {

//     for (int i = 1; i <= N; i++)
//     {
//         status[i] = 1;
//     }
// }

// void addNeighbors(int nodeN, int n,queue<int>q)
// {
//     vector<int> level;
//     for (int i = 1; i <= n; i++)
//     {
//         if (graph[nodeN][i] == 1 && status[i] == 1)
//         {
//             q.push(i);
//             status[i] = 2;
//             level.push_back(i);
//         }
//     }

//     if (level.size())
//     {
//         for (int i = 0; i < level.size(); i++)
//         {
//             cout << level[i] << " ";
//         }
//         cout << endl;
//     }
// }


// void bfs(int source,int n){
//     //intStatus(n);
//     queue<int>q; 
//     q.push(source);
//     status[source] = 2; 
//     //cout<<source<<endl;
//      while (!q.empty())
//     {
//         // step 4
//         int N; // do necessary things

//         N = q.front();
//         q.pop();

//         // cout<<N<<" ";

//         // step 5
//         addNeighbors(N, n,q);
//     }
// }

int arr[202][202];

void solve()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; i < m; j++)
        {
            cin >> arr[i][j];
    
        }
    }
    int ans =0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; i < m; j++)
        {
            
        }
    }
    
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