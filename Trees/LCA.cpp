// The Naive approach is to find the path of both nodes and find the common node and return

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        if(root==NULL || root==p || root==q)
        {
            return root;
        }
        
        TreeNode* left = lowestCommonAncestor(root->left, p, q);
        TreeNode* right = lowestCommonAncestor(root->right,p, q);
        
        
        if(left!=NULL && right!=NULL)
        {
            return root;
        }
        else if(left!=NULL)
        {
            return left;
        }
        else {
            return right;
        }   
    }