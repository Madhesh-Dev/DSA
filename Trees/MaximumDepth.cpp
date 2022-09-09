
// recursive solution

int maxDepth(TreeNode* root) {
        
        if(root==NULL) return 0;
        
        return 1+max(maxDepth(root->left),maxDepth(root->right));
        
}

// level order approach

int maxDepth(TreeNode* root){
        
        if(root==NULL) return 0;
        
        queue<TreeNode*> q;
        q.push(root);
        
        int level = 0;
        while(!q.empty()){
            
            int size = q.size();
            
            for(int i=0;i<size;i++){
                
                TreeNode* cur = q.front();
                q.pop();
                
                if(cur->left) q.push(cur->left);
                if(cur->right) q.push(cur->right);
                
                
            }
            
            level = level+1;
            
            
        }
        
        return level;
    }

