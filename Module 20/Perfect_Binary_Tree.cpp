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

int getHeight(Node *root)
{
  if (root == NULL)
    return 0;
  int l = getHeight(root->left);
  int r = getHeight(root->right);
  return 1 + max(l, r);
}

int countNodes(Node *root)
{
  if (root == NULL)
    return 0;
  int l = countNodes(root->left);
  int r = countNodes(root->right);
  return (l + r)+1;
}
// int countLeafNodes(Node *root)
// {
//   if (root == NULL)
//     return 0;
//   if (root->left == NULL && root->right == NULL)
//     return 1;
//   int l = countLeafNodes(root->left);
//   int r = countLeafNodes(root->right);

//   return l + r;
// }
int main()
{
  Node *root = input_tree();

  int n;
  cin >> n;
  int height = getHeight(root);
  int numNodes = countNodes(root);
  // int leaf = countLeafNodes(root);

  int formula = pow(2, height) - 1;
  if (numNodes == formula)
  {
    cout << "YES" << endl;
  }
  else
  {
    cout << "NO" << endl;
  }

  return 0;
}
