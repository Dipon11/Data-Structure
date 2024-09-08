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
void postOrder(TreeNode *temp, vector<int> &v)
{
  if (temp == NULL)
    return;
  postOrder(temp->left, v);
  postOrder(temp->right, v);
  v.push_back(temp->data);
}
vector<int> postorderTraversal(TreeNode *root)
{
  vector<int> v;
  postOrder(root, v);
  return v;
}