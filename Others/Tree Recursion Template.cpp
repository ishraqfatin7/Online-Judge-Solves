#include <bits/stdc++.h>
using namespace std;
int flag = 0;
struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};

Node *root = NULL;

void create_tree()
{
    Node *sixty = new Node(60);
    Node *forty = new Node(40);
    Node *sixtyfive = new Node(65);
    Node *thirty = new Node(30);
    Node *fifty = new Node(50);
    Node *thirtyfive = new Node(35);
    Node *seventy = new Node(70);
    Node *sixtyeight = new Node(68);
    Node *seventyfive = new Node(75);

    sixty->left = forty;
    sixty->right = sixtyfive;
    forty->left = thirty;
    forty->right = fifty;

    thirty->right = thirtyfive;
    sixtyfive->right = seventy;
    seventy->left = sixtyeight;
    seventy->right = seventyfive;

    root = sixty;
}

void pre_order(Node *node)
{
    if (node == NULL)
    {
        return;
    }
    cout << node->data<<" ";
    pre_order(node->left);
    pre_order(node->right);
}

int main()
{
    create_tree();

    pre_order(root);

    return 0;
}
