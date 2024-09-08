#include <bits/stdc++.h>
/************************************************************

    Following is the BinaryTreeNode class structure

    template <typename T>
    class BinaryTreeNode {
       public:
        T val;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

vector<int> getLevelOrder(BinaryTreeNode<int> *root)
{
  vector<int> v;
  if (root == NULL)
    return v;
  queue<BinaryTreeNode<int> *> q;
  q.push(root);
  while (!q.empty())
  {
    BinaryTreeNode<int> *front = q.front();

    v.push_back(front->val);

    if (front->left)
      q.push(front->left);
    if (front->right)
      q.push(front->right);
    q.pop();
  }
}