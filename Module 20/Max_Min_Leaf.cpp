#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *input_tree()
{
    int val;
    cin >> val;

    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);

    queue<Node *> q;

    if (root)
        q.push(root);

    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        Node *left, *right;

        if (l == -1)
            left = NULL;
        else
            left = new Node(l);

        if (r == -1)
            right = NULL;
        else
            right = new Node(r);

        p->left = left;
        p->right = right;

        if (p->left)
        {
            q.push(p->left);
        }
        if (p->right)
        {
            q.push(p->right);
        }
    }
    return root;
}

void max_min(Node *root, int &max, int &min)
{
    if (root == NULL)
    {
        return;
    }
   if(root->left==NULL && root->right==NULL) 
   {
    if (root->val > max)
    {
        max= root->val;
    }
    if (root->val < min)
    {
        min = root->val;
    }
 
    }
    max_min(root->left, max, min);
    max_min(root->right, max, min);
    
    
 
}

int main()
{
    Node *root = input_tree();

    int max = INT_MIN;
    int min = INT_MAX;

    max_min(root, max, min);

  
    cout <<  max << " " << min << endl;

    return 0;
}
