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

void node_level(Node *root, int leval)
{
  queue<pair<Node *, int>> q;
  q.push(make_pair(root, 0));
  bool found = false;
  while (!q.empty())
  {
    int level = 0;
    pair<Node *, int> pr = q.front();
    Node *node = pr.first;
    level = pr.second;
    q.pop();

    if (leval == level)
    {
      cout << node->val << " ";
      found = true;
    }

    if (node->left)
      q.push({node->left, level + 1});
    if (node->right)
      q.push({node->right, level + 1});
  }
  if (!found)
  {
    cout << "Invalid" << endl;
  }
}
int main()
{
  Node *root = input_tree();

  int n;
  cin >> n;
  node_level(root, n);

  return 0;
}
