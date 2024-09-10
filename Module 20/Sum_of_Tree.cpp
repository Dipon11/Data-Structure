#include<bits/stdc++.h>
using namespace std;

class Node
{
  public:
  int val;
  Node *left;
  Node *right;
  Node(int val)
  {
    this->val=val;
    this->left=NULL;
    this->right=NULL;
  }

};

Node * input_tree()
{
  int val;
  cin >> val;

  Node * root;
  if (val == -1)
    root = NULL;
  else
    root = new Node(val);

  queue<Node *> q;

  if (root)
    q.push(root);

  while (!q.empty())
  {
    // 1 . ber kore ano

    Node *p = q.front();
    q.pop();

    // 2. jabotiyo jah kaj

    int l, r;
    cin >> l >> r;

    Node *left;
    Node *right;

    if (l == -1)
      left = NULL;
    
    else
      left = new Node(l);
    
    if (r == -1)
      right = NULL;
    
    else
      right = new Node(r);

//root node er sthae connect kora lgbe 
    p->left=left;
    p->right=right;
  
 
    // 3. cjildren er gulo push koro

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
int in_order(Node *root)
{
    //base case
    if(root == NULL)
    {
        return 0;
    }

    
    int sum = root->val; 
    sum += in_order(root->left);
    sum += in_order(root->right);
    
    return sum; 
}  

int main()
{
      Node * root= input_tree();
     int sm= in_order(root);

      cout<< sm  <<endl;
     
     

    return 0;
}
