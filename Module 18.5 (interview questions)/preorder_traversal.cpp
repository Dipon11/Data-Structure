/*
    Following is Binary Tree Node structure:
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };
*/
void preOrder(TreeNode<int> *temp ,vector<int>&v)
{
     if( temp == NULL) return ;
   v.push_back(temp->data);
   preOrder(temp->left,v);
   preOrder(temp->right,v);
   
}
vector<int> preOrder(TreeNode<int> * root)
{
 vector<int>v;
 preOrder(root,v);
  return v;
}