#include <bits/stdc++.h>
using namespace std;

int graph[10][10];
int status[10];


struct Node
{
    int data;

    Node *next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

struct Queue
{
    Node *front, *back;
    Queue()
    {
        front = back = NULL;
    }
    void enqueue(int x)
    {
        Node *temp = new Node(x);
        if (back == NULL)
        {
            front = back = temp;
            return;
        }
        back->next = temp;
        back = temp;
    }

    int dequeue()
    {

        if (front == NULL)
            return 0;

        Node *temp = front;
        front = front->next;
        if (front == NULL)
            back = NULL;
        return temp->data;
        delete (temp);
    }

    bool isEmpty()
    {
        if (front == NULL && back == NULL)
        {
            return 1;
        }
        return 0;
    }
};
Queue Q1;
void displayQueue()
{
    if (Q1.isEmpty())
    {

        return;
    }
    else
    {
        Node *temp = Q1.front;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
}

int checkChar(char c)
{

    for (int i = 1; i <= 6; i++)
    {
        if (charNodes[i] == c)
        {
            return i;
        }
    }
    return -1;
};
void inputGraph(int N, int E)
{
    char source, dest;
}

void printAM(int N)
{
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            printf(" %d ", graph[i][j]);
        }
        printf("\n");
    }
}

void initStatus(int N)
{

    for (int i = 1; i <= N; i++)
    {
        status[i] = 1;
    }
}

void addNeighbors(int nodeN, int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (graph[nodeN][i] == 1 && status[i] == 1)
        {
            Q1.enqueue(i);
            status[i] = 2;
        }
    }
}

void bfs(int s, int n)
{
    // step 1
    initStatus(n);
    // step 2
    Q1.enqueue(s);
    status[s] = 2;

    // step 3
    while (!Q1.isEmpty())
    {
        // step 4
        int N; // do necessary things

        N = Q1.dequeue();
        cout << graph[N] << " ";

        // step 5
        addNeighbors(N, n);
    }
}

void solve()
{
    int n, k, source;
    // char charSource;
    // printf("Enter no of Node: ");
    cin >> n >> k;
    int source, dest;
    for (int i = 1; i < n; i++)
    {

        cin >> source >> dest>>k;
        graph[source][dest] = k;
        // graph[dest][source] = 1;
        // for undirected graph
    }

   
    // displayQueue();
    bfs(1, n);
}

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        solve();
    }

    return 0;
}
