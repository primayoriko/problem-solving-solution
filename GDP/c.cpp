#include <bits/stdc++.h>
using namespace std;

vector<int> sol;

struct Node
{
    int val;
    struct Node *left, *right;
    Node(int data)
    {
        val = data;
        left = right = NULL;
    }
};

void add(Node *root, int value)
{
    if (root->val < value)
    {
        if (root->right == NULL)
        {
            //cout << '!' << root->val << endl;
            Node *x = new Node(value);
            root->right = x;
        }
        else
        {
            add(root->right, value);
        }
    }
    else if (root->val > value)
    {
        if (root->left == NULL)
        {
            //cout << '!' << root->val << endl;
            Node *x = new Node(value);
            root->left = x;
        }
        else
        {
            add(root->left, value);
        }
    }
}

void findNonLeaf(Node *root)
{
    if (root->left != NULL || root->right != NULL)
    {
        sol.push_back(root->val);
        if (root->left != NULL)
            findNonLeaf(root->left);
        if (root->right != NULL)
            findNonLeaf(root->right);
    }
}

int solve()
{
    int n;
    cin >> n;
    if (n > 0)
    {
        int a;
        cin >> a;
        Node root(a);
        for (int i = 1; i < n; i++)
        {
            cin >> a;
            add(&root, a);
        }
        findNonLeaf(&root);
        sort(sol.begin(), sol.end());
    }
    for (int i = 0; i < sol.size(); i++)
    {
        cout << sol[i] << endl;
    }
    return 0;
}

int main()
{
    solve();
}