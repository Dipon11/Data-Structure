/************************************************************

    Following is the Binary Tree node structure

    template <typename T>
    class BinaryTreeNode
    {
        public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data)
        {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
bool find(BinaryTreeNode<int> *root, int x) {
    if (root == NULL) return false; 
    if (root->data == x) return true; 

    
    bool leftFound = find(root->left, x);
    if (leftFound) return true; 

    bool rightFound = find(root->right, x);
    return rightFound;
}

bool isNodePresent(BinaryTreeNode<int> *root, int x) {
    
    return find(root, x);
}
