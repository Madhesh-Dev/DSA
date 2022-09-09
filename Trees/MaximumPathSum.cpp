    int helper(TreeNode* root,int &maxi){
        
        if(root==NULL) return 0;
        
        int leftSub = max(0,helper(root->left,maxi));
        int rightSub = max(0,helper(root->right,maxi));
        
        maxi = max(maxi,root->val + leftSub + rightSub);
        
        return root->val + max(leftSub,rightSub);
        
    }
    
    int maxPathSum(TreeNode* root) {
        
        int maxi = INT_MIN;
        helper(root,maxi);
        return maxi;
        
        
    }