    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        
        vector<vector<int>> ans;
        if(root==NULL) return ans;
        
        bool leftToRight = true;
        
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty()){
            
            int size = q.size();
            vector<int> temp(size);
            
            for(int i=0;i<size;i++){
                
                TreeNode* cur = q.front();
                q.pop();
                
                int index = (leftToRight)? i:(size-1-i);
                
                temp[index] = cur->val;
                
                if(cur->left) q.push(cur->left);
                if(cur->right) q.push(cur->right);
                
            }
            leftToRight = !leftToRight;
            ans.push_back(temp);
            
        }
        
        return ans;
        
    }