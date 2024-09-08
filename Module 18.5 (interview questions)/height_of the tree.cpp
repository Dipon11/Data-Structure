#include <bits/stdc++.h>
/*
  Tree Node class.

  class BinaryTreeNode
  {
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data) {
      this->data = data;
      left = NULL;
      right = NULL;
    }
  }
*/

int countLeftNodes(BinaryTreeNode<int> *root)
{

  if (root == NULL)
    return 0;

  int sum = 0;

  if (root->left)
  {
    sum += root->left->data;
  }

  sum += countLeftNodes(root->left);
  sum += countLeftNodes(root->right);

  return sum;
}

long long leftSum(BinaryTreeNode<int> *root)
{

  int leftNodes = countLeftNodes(root);
  return leftNodes;
}