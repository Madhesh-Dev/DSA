    void helper(TreeNode *node,int level,vector<int>& result)
    {
        if(node==NULL) return;

        if(level==result.size())
        {
            result.push_back(node->val);
        }
        
        helper(node->right,level+1,result);
        helper(node->left,level+1,result);

    }
    vector<int> rightSideView(TreeNode* root) {

       vector<int> result;
       helper(root,0,result);
        
       return result;
    }